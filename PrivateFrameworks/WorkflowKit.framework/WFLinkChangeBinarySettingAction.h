
@interface WFLinkChangeBinarySettingAction : WFOverridableLinkAction

- (id)overrideDefaultValuesByParameter;
- (id)overrideLabelsByParameter;
- (id)overrideParameterSummary;
- (bool)shouldOverrideParameterLabels;

@end
