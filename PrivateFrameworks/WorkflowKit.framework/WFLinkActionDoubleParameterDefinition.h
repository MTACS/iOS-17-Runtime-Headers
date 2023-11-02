
@interface WFLinkActionDoubleParameterDefinition : WFLinkActionParameterDefinition

- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg1;
- (id)initWithParameterMetadata:(id)arg1;
- (id)linkValueFromParameterState:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (Class)parameterClass;
- (id)parameterDefinitionDictionary;
- (id)parameterStateFromLinkValue:(id)arg1;

@end
