
@protocol WFOutOfProcessWorkflowControllerStateMachineDelegate <NSObject>

@required

- (void)controllerStateMachine:(WFOutOfProcessWorkflowControllerStateMachine *)arg1 didFinishRunningShortcutWithResult:(WFWorkflowRunResult *)arg2;
- (void)controllerStateMachine:(WFOutOfProcessWorkflowControllerStateMachine *)arg1 didRequestStoppingShortcutWithError:(NSError *)arg2;
- (void)controllerStateMachine:(WFOutOfProcessWorkflowControllerStateMachine *)arg1 shouldNotifyDelegateWithResult:(WFWorkflowRunResult *)arg2 currentDialogAttribution:(WFDialogAttribution *)arg3;
- (void)controllerStateMachineDidRequestRunnerTearDown:(WFOutOfProcessWorkflowControllerStateMachine *)arg1;

@end
