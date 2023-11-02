
@interface INCodableScalarAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding> {
    long long  _type;
}

@property (nonatomic) long long type;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyName:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (Class)resolutionResultClass;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;
- (long long)valueType;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_contentItemForValue:(id)arg1;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;

@end
