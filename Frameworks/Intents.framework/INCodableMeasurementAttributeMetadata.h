
@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {
    NSOrderedSet * _defaultUnits;
    double  _defaultValue;
    bool  _supportsNegativeNumbers;
    NSUnit * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSOrderedSet *defaultUnits;
@property (nonatomic) double defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsNegativeNumbers;
@property (nonatomic, retain) NSUnit *unit;
@property (nonatomic, readonly) NSString *wf_measurementType;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)_defaultUnitWithNames:(id)arg1;
- (Class)_unitClass;
- (id)_unitWithUnitName:(id)arg1;
- (id)defaultUnits;
- (double)defaultValue;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultUnits:(id)arg1;
- (void)setDefaultValue:(double)arg1;
- (void)setSupportsNegativeNumbers:(bool)arg1;
- (void)setUnit:(id)arg1;
- (bool)supportsNegativeNumbers;
- (id)unit;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_measurementType;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;
- (void)wf_updateWithParameterState:(id)arg1;
- (void)wf_updateWithParameterValue:(id)arg1;

@end
