
@interface WFLinkShortcutsSetDataRoamingAction : WFOverridableLinkAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (id)smartPromptSubtitleWithPreviousContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
