
@interface WFLinkActionParameterDefinition : NSObject {
    LNActionParameterMetadata * _parameterMetadata;
    LNValueType * _valueType;
}

@property (nonatomic, readonly) Class parameterClass;
@property (nonatomic, readonly) NSDictionary *parameterDefinitionDictionary;
@property (nonatomic, readonly) LNActionParameterMetadata *parameterMetadata;
@property (nonatomic, readonly) NSDictionary *typeSpecificMetadata;
@property (nonatomic, readonly) LNValueType *valueType;

- (void).cxx_destruct;
- (bool)boolForTypeSpecificMetadataKey:(id)arg1 defaultValue:(bool)arg2;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg1;
- (void)getLinkValueFromProcessedParameterValue:(id)arg1 parameterState:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithValueType:(id)arg1 parameterMetadata:(id)arg2;
- (long long)integerForTypeSpecificMetadataKey:(id)arg1 defaultValue:(long long)arg2;
- (id)linkValueFromParameterState:(id)arg1;
- (id)linkValueWithValue:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (id)objectForTypeSpecificMetadataKey:(id)arg1 ofClass:(Class)arg2;
- (Class)parameterClass;
- (id)parameterDefinitionDictionary;
- (id)parameterMetadata;
- (id)parameterStateFromLinkValue:(id)arg1;
- (id)typeSpecificMetadata;
- (id)valueType;

@end
