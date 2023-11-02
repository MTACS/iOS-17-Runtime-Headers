
@protocol WFUIPresenterDelegate <NSObject>

@optional

- (void)presenterDidReceiveSuspendedResponseForRequest:(void *)arg1 runningContext:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: WFDialogRequest *, WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDialogResponse *, NSError *, void*
- (void)presenterRequestedUpdatedRunViewSource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFWorkflowRunViewSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFWorkflowRunViewSource *, NSError *, void*
- (void)presenterRequestedWorkflowPauseForContext:(WFWorkflowRunningContext *)arg1 dialogRequest:(WFDialogRequest *)arg2;
- (void)presenterRequestedWorkflowStopForContext:(WFWorkflowRunningContext *)arg1;
- (bool)presenterShouldShowRequest:(void *)arg1 runningContext:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: WFDialogRequest *, WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDialogResponse *, NSError *, void*
- (void)presenterWillDismissPresentedContent;
- (void)presenterWillShowRequest:(WFDialogRequest *)arg1 runningContext:(WFWorkflowRunningContext *)arg2;

@end
