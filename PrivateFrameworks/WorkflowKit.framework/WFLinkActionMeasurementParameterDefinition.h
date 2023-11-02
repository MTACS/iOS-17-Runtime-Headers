
@interface WFLinkActionMeasurementParameterDefinition : WFLinkActionParameterDefinition

- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg1;
- (void)getLinkValueFromProcessedParameterValue:(id)arg1 parameterState:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)linkValueFromParameterState:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (Class)parameterClass;
- (id)parameterDefinitionDictionary;
- (id)parameterStateFromLinkValue:(id)arg1;
- (id)unitFromUnitString:(id)arg1;

@end
