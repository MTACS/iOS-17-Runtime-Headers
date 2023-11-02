
@interface WFRowTemplateParameterState : NSObject <WFParameterState> {
    WFDateSubstitutableState * _anotherDateValue;
    WFBooleanSubstitutableState * _booleanValue;
    bool  _bounded;
    WFByteCountUnitSubstitutableState * _byteCountUnitValue;
    WFCalendarUnitSubstitutableState * _calendarUnitValue;
    long long  _comparisonOperator;
    Class  _contentItemClass;
    NSArray * _contentProperties;
    WFContentProperty * _contentProperty;
    WFDateSubstitutableState * _dateValue;
    WFVariableStringParameterState * _emailValue;
    WFVariableSubstitutableParameterState * _enumerationValue;
    bool  _hidden;
    NSUUID * _identity;
    WFMeasurementUnitSubstitutableState * _measurementUnitValue;
    WFNumberStringSubstitutableState * _numberValue;
    WFVariableStringParameterState * _phoneValue;
    NSString * _propertyName;
    bool  _removable;
    WFVariableStringParameterState * _stringValue;
    bool  _variablesDisabled;
}

@property (nonatomic, readonly) WFDateSubstitutableState *anotherDateValue;
@property (nonatomic, readonly) WFBooleanSubstitutableState *booleanValue;
@property (nonatomic, readonly) bool bounded;
@property (nonatomic, readonly) WFByteCountUnitSubstitutableState *byteCountUnitValue;
@property (nonatomic, readonly) WFCalendarUnitSubstitutableState *calendarUnitValue;
@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, readonly, copy) NSArray *contentProperties;
@property (nonatomic, readonly) WFContentProperty *contentProperty;
@property (nonatomic, readonly) WFDateSubstitutableState *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFVariableStringParameterState *emailValue;
@property (nonatomic, readonly) WFVariableSubstitutableParameterState *enumerationValue;
@property (nonatomic, readonly, copy) NSArray *filterableProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly) WFMeasurementUnitSubstitutableState *measurementUnitValue;
@property (nonatomic, readonly) WFNumberStringSubstitutableState *numberValue;
@property (nonatomic, readonly) WFVariableStringParameterState *phoneValue;
@property (nonatomic, readonly) bool removable;
@property (nonatomic, readonly) WFVariableStringParameterState *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool variablesDisabled;

+ (id)dictionaryForSerializedValue:(id)arg1 withLinkValueType:(id)arg2;
+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)actualCopyWithZone:(struct _NSZone { }*)arg1;
- (id)actualCopyWithZone:(struct _NSZone { }*)arg1 propertyName:(id)arg2;
- (id)anotherDateValue;
- (id)booleanValue;
- (bool)bounded;
- (id)byteCountUnitValue;
- (id)calendarUnitValue;
- (long long)comparisonOperator;
- (id)containedVariables;
- (Class)contentItemClass;
- (id)contentProperties;
- (id)contentProperty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue;
- (id)defaultStateForInfo:(const struct WFRowTemplateValueInfo { Class x1; SEL x2; SEL x3; id x4; id x5; }*)arg1;
- (id)emailValue;
- (id)enumerationValue;
- (id)filterableProperties;
- (void)getUserInputRequiredValue:(id /* block */)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (bool)hidden;
- (id)identity;
- (id)initWithPropertyName:(id)arg1 contentItemClass:(Class)arg2 comparisonOperator:(long long)arg3 removable:(bool)arg4 bounded:(bool)arg5 hidden:(bool)arg6;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4 variablesDisabled:(bool)arg5 linkValueType:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isValueWithInfoDisplayed:(const struct WFRowTemplateValueInfo { Class x1; SEL x2; SEL x3; id x4; id x5; }*)arg1;
- (id)measurementUnitValue;
- (id)numberValue;
- (id)phoneValue;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (bool)removable;
- (id)serializedRepresentation;
- (id)stateBySettingAnotherDateValue:(id)arg1;
- (id)stateBySettingBooleanValue:(id)arg1;
- (id)stateBySettingByteCountUnitValue:(id)arg1;
- (id)stateBySettingCalendarUnitValue:(id)arg1;
- (id)stateBySettingComparisonOperator:(long long)arg1;
- (id)stateBySettingContentProperty:(id)arg1;
- (id)stateBySettingDateValue:(id)arg1;
- (id)stateBySettingEmailValue:(id)arg1;
- (id)stateBySettingEnumerationValue:(id)arg1;
- (id)stateBySettingMeasurementUnitValue:(id)arg1;
- (id)stateBySettingNumberValue:(id)arg1;
- (id)stateBySettingPhoneValue:(id)arg1;
- (id)stateBySettingStringValue:(id)arg1;
- (id)stateBySettingVariablesDisabled:(bool)arg1;
- (id)stringValue;
- (bool)variablesDisabled;

@end