
@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver, PXAssetEditOperationManagerObserver> {
    PUAssetViewModel * _assetViewModel;
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
        long long fileSize; 
    }  _badgeInfo;
    double  _lastPlayingTime;
    struct { 
        bool output; 
    }  _needsUpdateFlags;
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
        long long fileSize; 
    }  _outputBadgeInfo;
    bool  _outputShouldAnimate;
    bool  _playing;
}

@property (nonatomic, readonly) PUAssetViewModel *assetViewModel;
@property (nonatomic, readonly) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; } badgeInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastPlayingTime;
@property (nonatomic, readonly) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; } outputBadgeInfo;
@property (nonatomic, readonly) bool outputShouldAnimate;
@property (nonatomic) bool playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })_filteredBadgeInfoForTime:(double)arg1 outShouldAnimate:(bool*)arg2;
- (void)_invalidateOutput;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_setOutputBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1 shouldAnimate:(bool)arg2;
- (void)_updateIfNeeded;
- (void)_updateOutputIfNeeded;
- (void)_updatePlaying;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void*)arg3;
- (id)assetViewModel;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })badgeInfo;
- (void)didPerformChanges;
- (id)init;
- (void)invalidateOutput;
- (double)lastPlayingTime;
- (id)mutableChangeObject;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })outputBadgeInfo;
- (bool)outputShouldAnimate;
- (void)performChanges:(id /* block */)arg1;
- (bool)playing;
- (void)prepareForReuse;
- (void)setAssetViewModel:(id)arg1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
- (void)setLastPlayingTime:(double)arg1;
- (void)setPlaying:(bool)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
