
@protocol WFUIPresenterHostInterface <NSObject>

@required

- (void)presenterRequestedUpdatedRunViewSource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFWorkflowRunViewSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFWorkflowRunViewSource *, NSError *, void*
- (void)presenterRequestedWorkflowPauseForContext:(void *)arg1 dialogRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFWorkflowRunningContext *, WFDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presenterRequestedWorkflowStopForContext:(WFWorkflowRunningContext *)arg1;

@end
