
@interface PUDepthToggleEditOperationPerformer : PXAssetEditOperationPerformer <PELivePortraitBehaviorDelegate> {
    id /* block */  _completionHandler;
    bool  _didSave;
    bool  _liveIsEnabled;
    PEPhotoKitMediaDestination * _mediaDestination;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originalStillImageTime;
    NSString * _sourceEditOperationType;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool liveIsEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } originalStillImageTime;
@property (readonly) Class superclass;

+ (id)_sharedResourceManager;

- (void).cxx_destruct;
- (void)_completeWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleLoadResult:(id)arg1 imageValues:(id)arg2;
- (void)_performEditOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resourceLoadedWithResult:(id)arg1 editOperationType:(id)arg2;
- (bool)_shouldEnableDepth;
- (id)asset;
- (bool)isLivePhotoVideoEnabled;
- (bool)liveIsEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })originalStillImageTime;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setLiveIsEnabled:(bool)arg1;
- (void)setLivePhotoVideoEnabled:(bool)arg1;
- (void)setOriginalStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedStillImageTime;

@end
