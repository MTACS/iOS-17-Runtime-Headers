
@interface WFLinkActionBoolParameterDefinition : WFLinkActionParameterDefinition

- (id)falseDisplayName;
- (id)initWithParameterMetadata:(id)arg1;
- (id)linkValueFromParameterState:(id)arg1;
- (id)linkValueWithValue:(id)arg1;
- (id)localizedTitleForLinkValue:(id)arg1;
- (Class)parameterClass;
- (id)parameterDefinitionDictionary;
- (id)parameterStateFromLinkValue:(id)arg1;
- (id)trueDisplayName;

@end
