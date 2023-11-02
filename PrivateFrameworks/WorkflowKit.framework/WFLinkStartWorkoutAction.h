
@interface WFLinkStartWorkoutAction : WFOverridableLinkAction

- (void)initializeParameters;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
