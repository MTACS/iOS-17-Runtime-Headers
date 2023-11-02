
@interface INCodableCustomObjectAttribute : INCodableObjectAttribute <INWidgetPlistRepresentable> {
    INCodableDescription * _codableDescription;
    NSString * _objectTypeName;
    NSString * _objectTypeNamespace;
}

@property (nonatomic) INCodableDescription *codableDescription;
@property (nonatomic, copy) NSString *objectTypeName;
@property (nonatomic, copy) NSString *objectTypeNamespace;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionObjectTypeKey;
- (id)__INCodableDescriptionObjectTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
- (id)__INTypeCodableDescriptionObjectTypeKey;
- (id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
- (void)_assignCodableDescription;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;
- (Class)_unsafeObjectClass;
- (id)codableDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)objectTypeName;
- (id)objectTypeNamespace;
- (Class)resolutionResultClass;
- (void)setCodableDescription:(id)arg1;
- (void)setObjectTypeName:(id)arg1;
- (void)setObjectTypeNamespace:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)valueTransformer;
- (long long)valueType;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClass;
- (id)wf_contentItemForValue:(id)arg1;
- (Class)wf_facadeClass;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;

@end
