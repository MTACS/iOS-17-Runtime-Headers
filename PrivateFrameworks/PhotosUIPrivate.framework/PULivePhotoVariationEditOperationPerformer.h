
@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PELivePortraitBehaviorDelegate> {
    id /* block */  _completionHandler;
    bool  _didSave;
    bool  _liveIsEnabled;
    PEPhotoKitMediaDestination * _mediaDestination;
    NSString * _sourceEditOperationType;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool liveIsEnabled;
@property (readonly) Class superclass;

+ (id)_sharedResourceManager;

- (void).cxx_destruct;
- (void)_completeWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleDidFinishSavingEditsForAsset:(id)arg1 error:(id)arg2;
- (void)_handleLoadResult:(id)arg1 analysisResult:(id)arg2 editOperationType:(id)arg3;
- (void)_performEditOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resourceLoadedWithResult:(id)arg1 editOperationType:(id)arg2;
- (void)_saveAssetEditsWithContentEditingInput:(id)arg1 compositionController:(id)arg2 imageVersion:(long long)arg3 editOperationType:(id)arg4;
- (id)asset;
- (bool)isLivePhotoVideoEnabled;
- (bool)liveIsEnabled;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setLiveIsEnabled:(bool)arg1;
- (void)setLivePhotoVideoEnabled:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedStillImageTime;

@end
