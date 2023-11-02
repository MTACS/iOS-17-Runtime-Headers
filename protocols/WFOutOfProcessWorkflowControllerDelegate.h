
@protocol WFOutOfProcessWorkflowControllerDelegate <NSObject>

@required

- (void)outOfProcessWorkflowController:(WFOutOfProcessWorkflowController *)arg1 didFinishWithResult:(WFWorkflowRunResult *)arg2 dialogAttribution:(WFDialogAttribution *)arg3;

@optional

- (void)outOfProcessWorkflowController:(void *)arg1 didRequestUpdatedRunViewSource:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFOutOfProcessWorkflowController *, WFWorkflowRunViewSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFWorkflowRunViewSource *, NSError *, void*
- (void)outOfProcessWorkflowController:(WFOutOfProcessWorkflowController *)arg1 didStartFromWorkflowReference:(WFWorkflowDescriptor *)arg2 dialogAttribution:(WFDialogAttribution *)arg3;
- (void)outOfProcessWorkflowController:(WFOutOfProcessWorkflowController *)arg1 presenterRequestedWorkflowPauseWithContext:(WFWorkflowRunningContext *)arg2 dialogRequest:(WFDialogRequest *)arg3;

@end
