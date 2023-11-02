
@interface WFLinkActionEntityParameterDefinition : WFLinkActionParameterDefinition

- (id)initWithParameterMetadata:(id)arg1;
- (id)linkValueFromParameterState:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)arg1;

@end
