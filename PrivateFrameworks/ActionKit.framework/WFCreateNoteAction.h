
@interface WFCreateNoteAction : WFLinkCreateEntityAction

+ (id)overrideInputParameterName;

- (id)entityName;
- (bool)inputRequired;
- (id)keywords;
- (id)localizedKeyParameterDisplayName;
- (bool)openWhenRunParameterIsHidden;
- (unsigned long long)outputDisclosureLevel;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (bool)shouldLocalizeValueForSelector:(SEL)arg1;
- (bool)shouldOverrideParameterSummary;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
