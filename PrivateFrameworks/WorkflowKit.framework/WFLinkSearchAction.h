
@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (bool)shouldOverrideName;
- (bool)shouldOverrideParameterLabels;

@end
