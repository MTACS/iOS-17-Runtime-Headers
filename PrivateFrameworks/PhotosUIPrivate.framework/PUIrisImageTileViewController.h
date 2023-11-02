
@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {
    PHLivePhotoView * __livePhotoView;
    <PUIrisImageTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidBeginPlaying; 
        bool respondsToWillEndPlaying; 
        bool respondsToDidEndPlaying; 
        bool respondsToDidEndVitality; 
        bool respondsToDidBeginHinting; 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToDelegateForGestureRecognizer; 
    }  _delegateFlags;
    bool  _isVitalityDisabledByTransformInset;
    PXLivePhotoViewModulator * _livePhotoViewModulator;
    id /* block */  _ppt_didEndPlayingHandler;
}

@property (nonatomic, readonly) PHLivePhotoView *_livePhotoView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUIrisImageTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVitalityDisabledByTransformInset;
@property (nonatomic, retain) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (readonly) Class superclass;

+ (id)srlCompensationLoadingQueue;

- (void).cxx_destruct;
- (void)_assetFocusValueDidChange;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleLoadedSRLCompensationAmount:(id)arg1 forAsset:(id)arg2;
- (id)_livePhotoView;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)_updatePlaybackGestureRecognizer;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)_updateSRLCompensation;
- (void)_updateVitalityTransform;
- (void)addToTilingView:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetDidChange;
- (void)assetViewModelDidChange;
- (id)delegate;
- (id)generateAssetTransitionInfo;
- (bool)isVitalityDisabledByTransformInset;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoViewDidBeginHinting:(id)arg1;
- (void)livePhotoViewDidEndPlayingVitality:(id)arg1;
- (id)livePhotoViewModulator;
- (id)loadView;
- (void)ppt_playLivePhotoWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllAnimations;
- (void)setAssetViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsVitalityDisabledByTransformInset:(bool)arg1;
- (void)setLivePhotoViewModulator:(id)arg1;
- (void)updateModulator;
- (void)updateModulatorInputs;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
