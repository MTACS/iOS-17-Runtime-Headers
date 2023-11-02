
@protocol WFDialogPresentationManagerDelegate <NSObject>

@optional

- (void)presentationManager:(void *)arg1 dismissPresentedContentWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: WFDialogPresentationManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presentationManager:(WFDialogPresentationManager *)arg1 updateSmartPromptStateData:(NSArray *)arg2 actionUUID:(NSString *)arg3 context:(WFWorkflowRunningContext *)arg4 reference:(WFWorkflowReference *)arg5;

@end
