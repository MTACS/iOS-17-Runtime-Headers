
@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {
    NSNumber * _defaultValue;
    NSString * _falseDisplayName;
    NSString * _falseDisplayNameID;
    NSString * _trueDisplayName;
    NSString * _trueDisplayNameID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSNumber *defaultValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *falseDisplayName;
@property (nonatomic, copy) NSString *falseDisplayNameID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedFalseDisplayName;
@property (nonatomic, readonly, copy) NSString *localizedTrueDisplayName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trueDisplayName;
@property (nonatomic, copy) NSString *trueDisplayNameID;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionFalseDisplayNameIDKey;
- (id)__INCodableDescriptionFalseDisplayNameKey;
- (id)__INCodableDescriptionTrueDisplayNameIDKey;
- (id)__INCodableDescriptionTrueDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameKey;
- (id)defaultValue;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)falseDisplayName;
- (id)falseDisplayNameID;
- (id)initWithCoder:(id)arg1;
- (id)localizedFalseDisplayName;
- (id)localizedFalseDisplayNameWithLocalizer:(id)arg1;
- (id)localizedTrueDisplayName;
- (id)localizedTrueDisplayNameWithLocalizer:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setFalseDisplayName:(id)arg1;
- (void)setFalseDisplayNameID:(id)arg1;
- (void)setTrueDisplayName:(id)arg1;
- (void)setTrueDisplayNameID:(id)arg1;
- (id)trueDisplayName;
- (id)trueDisplayNameID;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;

@end
