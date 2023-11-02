
@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {
    NSNumber * _defaultValue;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *maximumValue;
@property (nonatomic, retain) NSNumber *minimumValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsNegativeNumbers;
@property (nonatomic) long long type;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;
- (id)defaultValue;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (void)setDefaultValue:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)supportsNegativeNumbers;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;

@end
