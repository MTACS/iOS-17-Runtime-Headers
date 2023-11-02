
@protocol WFOutOfProcessWorkflowControllerHost

@required

- (void)presenterRequestedUpdatedRunViewSource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFWorkflowRunViewSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFWorkflowRunViewSource *, NSError *, void*
- (void)runnerDidPunchToShortcutsJr;
- (void)runnerWillExit;
- (void)workflowDidPause;
- (void)workflowDidStartRunning:(WFWorkflowDescriptor *)arg1 isAutomation:(bool)arg2 dialogAttribution:(WFDialogAttribution *)arg3;

@end
