
@interface WFLinkActionURLParameterDefinition : WFLinkActionParameterDefinition

- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg1;
- (void)getLinkValueFromProcessedParameterValue:(id)arg1 parameterState:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithParameterMetadata:(id)arg1;
- (id)linkValueFromParameterState:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)arg1;

@end
