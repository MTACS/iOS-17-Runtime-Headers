
@protocol WFTriggerNotificationDebouncerDelegate <NSObject>

@required

- (void)postNotificationForTrigger:(WFConfiguredTrigger *)arg1 workflowReference:(WFWorkflowReference *)arg2 pendingTriggerEventIDs:(NSArray *)arg3;

@end
