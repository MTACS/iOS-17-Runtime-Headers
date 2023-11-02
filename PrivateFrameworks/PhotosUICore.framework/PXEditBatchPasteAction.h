
@interface PXEditBatchPasteAction : PXEditBatchAction {
    id  _target;
}

- (void).cxx_destruct;
- (void)_syncPasteDidFinishWithResults:(id)arg1 didCancel:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPresetManager:(id)arg1 syncProgress:(id)arg2 asyncProgress:(id)arg3 asyncLoadingStatusManager:(id)arg4 forAssets:(id)arg5;
- (bool)isEligibleForAsyncProcessingOnAsset:(id)arg1;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastSuccessTitle;
- (id)localizedProgressToastUndoTitle;
- (void)performAction:(id /* block */)arg1;

@end
