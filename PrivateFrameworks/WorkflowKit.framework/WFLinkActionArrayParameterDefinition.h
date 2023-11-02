
@interface WFLinkActionArrayParameterDefinition : WFLinkActionParameterDefinition

@property (nonatomic, readonly) LNArrayValueType *valueType;

- (id)arraySizeRangeForWidgetFamily:(id)arg1 withSizes:(id)arg2;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg1;
- (void)getLinkValueFromProcessedParameterValue:(id)arg1 parameterState:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithMemberValueType:(id)arg1 parameterMetadata:(id)arg2;
- (id)linkValueFromParameterState:(id)arg1;
- (id)linkValueFromProcessedParameterValue:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (id)memberParameterDefinition;
- (Class)parameterClass;
- (id)parameterDefinitionDictionary;
- (id)parameterStateFromLinkValue:(id)arg1;

@end
