
@interface INCodableObjectAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding> {
    NSString * _originalTypeName;
    NSString * _typeName;
}

@property (setter=_setOriginalTypeName:, nonatomic, copy) NSString *_originalTypeName;
@property (nonatomic, readonly, copy) NSString *className;
@property (nonatomic, copy) NSString *typeName;
@property (nonatomic, readonly) NSValueTransformer *valueTransformer;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (long long)_attributeType;
- (id)_originalTypeName;
- (Class)_relationshipValueTransformerClass;
- (void)_setOriginalTypeName:(id)arg1;
- (id)className;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (Class)resolutionResultClass;
- (void)setClassName:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;
- (void)updateWithDictionary:(id)arg1;
- (id)valueTransformer;
- (long long)valueType;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)mediaTypeFromIntentMediaType:(long long)arg1;
- (id)wf_contentItemForValue:(id)arg1;
- (Class)wf_facadeClass;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(id /* block */)arg4;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;

@end
