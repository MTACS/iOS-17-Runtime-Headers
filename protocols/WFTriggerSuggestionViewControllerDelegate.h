
@protocol WFTriggerSuggestionViewControllerDelegate

@required

- (void)triggerSuggestionViewControllerDidFinish:(WFTriggerSuggestionViewController *)arg1 actions:(NSArray *)arg2 editable:(bool)arg3 selectedEntryMetadata:(NSData *)arg4;
- (void)triggerSuggestionViewControllerDidFinish:(WFTriggerSuggestionViewController *)arg1 reference:(WFWorkflowReference *)arg2 selectedEntryMetadata:(NSData *)arg3;

@end
