
@interface PEAdjustmentPresetManager : NSObject <PEEditActionAnalyticsEventBuilderDelegate, PEEditActionBatchDelegate> {
    <PELoadingStatusDelegate> * _asyncLoadingStatusManager;
    PEEditActionBatch * _currentBatchAction;
    PEEditActionEventBuilder * _editActionEventBuilder;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    UIPasteboard * _pasteboard;
    PEResourceManager * _resourceManager;
}

@property (nonatomic) <PELoadingStatusDelegate> *asyncLoadingStatusManager;
@property (nonatomic, readonly) PEEditActionBatch *currentBatchAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PEEditActionEventBuilder *editActionEventBuilder;
@property (nonatomic, readonly) bool hasPresetOnPasteboard;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusyWithBatchAction;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadingQueue;
@property (retain) UIPasteboard *pasteboard;
@property (nonatomic, readonly) PEPasteablePreset *presetFromPasteboard;
@property (nonatomic, readonly) PEResourceManager *resourceManager;
@property (readonly) Class superclass;

+ (id)sharedPresetManager;

- (void).cxx_destruct;
- (bool)_assetHasVisibleAdjustments:(id)arg1 shouldConsiderOpaqueAdjustments:(bool)arg2;
- (void)_copyPreset:(id)arg1;
- (id)_editActionEventBuilderForAction:(id)arg1 assets:(id)arg2;
- (void)_sendAnalyticsForCopyActionOnAsset:(id)arg1 copiedCompositionController:(id)arg2;
- (void)_sendAnalyticsForCurrentEditAction;
- (void)apply:(id)arg1 onCompositionController:(id)arg2 editSource:(id)arg3 asset:(id)arg4 completion:(id /* block */)arg5;
- (bool)assetHasCopyableAdjustments:(id)arg1;
- (bool)assetHasRevertibleAdjustments:(id)arg1;
- (id)asyncLoadingStatusManager;
- (void)autoEnhanceAssets:(id)arg1 async:(bool)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (void)batch:(id)arg1 didCancelAction:(long long)arg2;
- (void)batch:(id)arg1 didCompleteAction:(long long)arg2 hasError:(bool)arg3;
- (void)batch:(id)arg1 willStartAction:(long long)arg2;
- (void)cancelCurrentBatchAction;
- (void)clearPasteboard;
- (void)copyPresetFromAsset:(id)arg1;
- (void)copyPresetFromCompositionController:(id)arg1;
- (void)copyPresetFromCompositionController:(id)arg1 sourceAsset:(id)arg2;
- (id)currentBatchAction;
- (id)editActionEventBuilder;
- (void)executeAction:(id)arg1 onAssets:(id)arg2 async:(bool)arg3 progress:(id)arg4 completion:(id /* block */)arg5;
- (bool)hasPresetOnPasteboard;
- (id)init;
- (bool)isBusyWithBatchAction;
- (id)loadingQueue;
- (void)pastePreset:(id)arg1 onAssets:(id)arg2 async:(bool)arg3 progress:(id)arg4 completion:(id /* block */)arg5;
- (id)pasteboard;
- (id)presetFromPasteboard;
- (void)replacePresets:(id)arg1 onAssets:(id)arg2 async:(bool)arg3 progress:(id)arg4 completion:(id /* block */)arg5;
- (id)resourceManager;
- (void)revertAdjustmentsOnAssets:(id)arg1 async:(bool)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (void)rotateAssets:(id)arg1 direction:(long long)arg2 async:(bool)arg3 progress:(id)arg4 completion:(id /* block */)arg5;
- (void)setAsyncLoadingStatusManager:(id)arg1;
- (void)setEditActionEventBuilder:(id)arg1;
- (void)setPasteboard:(id)arg1;
- (void)updateAnalyticsEventBuilderActionType:(id)arg1 forAssets:(id)arg2;

@end
