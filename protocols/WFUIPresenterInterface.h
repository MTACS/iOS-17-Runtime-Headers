
@protocol WFUIPresenterInterface <NSObject>

@optional

- (void)beginPersistentModeWithRunningContext:(void *)arg1 attribution:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFWorkflowRunningContext *, WFDialogAttribution *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)completePersistentModeWithSuccess:(void *)arg1 runningContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dismissPresentedContentForRunningContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)openURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)pauseDialogPresentationForDuration:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resumeDialogPresentationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showDialogRequest:(void *)arg1 runningContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFDialogRequest *, WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDialogResponse *, NSError *, void*
- (void)updateAttribution:(WFDialogAttribution *)arg1 runningContext:(WFWorkflowRunningContext *)arg2;
- (void)updateRunViewSource:(WFWorkflowRunViewSource *)arg1;

@end
