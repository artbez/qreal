#pragma once

#include "codeConverterBase.h"

namespace generatorBase {
namespace converters {

/// Processes input string treating it as an expression of the bool type.
/// Inverts this expression if it was specified in constructor. Inversion
/// code must be specified in "conditional/negation.t" template.
class BoolPropertyConverter : public CodeConverterBase
{
public:
	BoolPropertyConverter(QString const &pathToTemplates
			, QMap<interpreterBase::robotModel::PortInfo, interpreterBase::robotModel::DeviceInfo> const &devices
			, simple::Binding::ConverterInterface const *inputPortConverter
			, simple::Binding::ConverterInterface const *outputPortConverter
			, simple::Binding::ConverterInterface const *functionInvocationsConverter
			, bool needInverting);

	virtual QString convert(QString const &data) const;

private:
	QString invert(QString const &expression) const;

	bool mNeedInverting;
};

}
}
