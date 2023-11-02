
@interface WFShowInBlindSquareAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)showLocation:(id)arg1 named:(id)arg2 address:(id)arg3 phoneNumber:(id)arg4;
- (void)showMapItem:(id)arg1 named:(id)arg2;
- (void)showPlacemark:(id)arg1 named:(id)arg2 phoneNumber:(id)arg3;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
