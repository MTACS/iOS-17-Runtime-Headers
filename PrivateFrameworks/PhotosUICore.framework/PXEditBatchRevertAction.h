
@interface PXEditBatchRevertAction : PXEditBatchAction

- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastSuccessTitle;
- (id)localizedProgressToastUndoTitle;
- (void)performAction:(id /* block */)arg1;

@end
