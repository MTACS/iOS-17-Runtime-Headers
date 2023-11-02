
@interface PXEditBatchAction : PXAction {
    NSObject<OS_dispatch_queue> * _actionQueue;
    bool  _allowSynchronousRendering;
    NSArray * _assets;
    NSArray * _asyncAssets;
    NSProgress * _asyncProgress;
    id /* block */  _completionHandler;
    <PXEditPresetManager> * _manager;
    NSArray * _syncAssets;
    NSProgress * _syncProgress;
    NSMutableDictionary * _undoActionMap;
}

@property (nonatomic) bool allowSynchronousRendering;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSProgress *asyncProgress;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) <PXEditPresetManager> *manager;
@property (nonatomic, readonly) NSProgress *syncProgress;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_reportResults:(id)arg1;
- (void)_saveResults:(id)arg1 needsUndoMap:(bool)arg2 completion:(id /* block */)arg3;
- (void)_saveUndoMapFromResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_syncUndoDidFinishWithResults:(id)arg1 didCancel:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)allowSynchronousRendering;
- (id)assets;
- (id)asyncAssets;
- (id)asyncProgress;
- (id /* block */)completionHandler;
- (void)executeWithUndoManager:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithPresetManager:(id)arg1 syncProgress:(id)arg2 asyncProgress:(id)arg3 asyncLoadingStatusManager:(id)arg4 forAssets:(id)arg5;
- (bool)isEligibleForAsyncProcessingOnAsset:(id)arg1;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastSuccessTitle;
- (id)localizedProgressToastUndoTitle;
- (id)manager;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)prefetchOriginalMetadataForAssets:(id)arg1;
- (void)saveResults:(id)arg1 completion:(id /* block */)arg2;
- (void)setAllowSynchronousRendering:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (bool)shouldRenderSynchronouslyForAsset:(id)arg1;
- (id)syncAssets;
- (id)syncProgress;
- (void)willBeginActionIsAsync:(bool)arg1 itemCount:(unsigned long long)arg2;
- (void)willBeginActionWithLocalizedTitle:(id)arg1 isAsync:(bool)arg2 itemCount:(unsigned long long)arg3;

@end
