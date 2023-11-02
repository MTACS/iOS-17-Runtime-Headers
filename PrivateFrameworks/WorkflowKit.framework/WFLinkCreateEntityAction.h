
@interface WFLinkCreateEntityAction : WFLinkEntityAction

- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideParameterSummary;
- (Class)overrideTypeDescriptions;
- (bool)shouldOverrideParameterLabels;
- (id)verb;

@end
