
@protocol WFTriggerEventRunnerDelegate <NSObject>

@required

- (void)didFinishRunningWithError:(NSError *)arg1 cancelled:(bool)arg2 trigger:(WFConfiguredTrigger *)arg3 runEvent:(WFWorkflowRunEvent *)arg4;

@end
