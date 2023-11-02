
@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding> {
    INCodableEnum * _codableEnum;
    NSString * _enumNamespace;
}

@property (nonatomic, retain) INCodableEnum *codableEnum;
@property (nonatomic, copy) NSString *enumNamespace;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INCodableDescriptionEnumTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;
- (id)codableEnum;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)enumNamespace;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (Class)resolutionResultClass;
- (void)setCodableEnum:(id)arg1;
- (void)setEnumNamespace:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)valueForIndex:(unsigned long long)arg1;
- (long long)valueType;
- (id)valueWithName:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_contentItemForValue:(id)arg1;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(id /* block */)arg4;
- (Class)wf_objectClass;
- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;

@end
