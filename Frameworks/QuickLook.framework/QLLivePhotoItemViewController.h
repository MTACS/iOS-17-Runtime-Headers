
@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, QLImageAnalysisManagerDelegate, UIGestureRecognizerDelegate> {
    UIView * _analysisButtonContainer;
    NSLayoutConstraint * _analysisButtonContainerBottomConstraint;
    NSLayoutConstraint * _analysisButtonContainerRightConstraint;
    NSDate * _didEndPlayingTimestamp;
    bool  _fullyZoomedOut;
    QLImageAnalysisManager * _imageAnalysisManager;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isFullScreen;
    bool  _isPlaying;
    UIImageView * _livePhotoBadge;
    NSLayoutConstraint * _livePhotoBadgeLeftConstraint;
    NSLayoutConstraint * _livePhotoBadgeTopConstraint;
    bool  _livePhotoBadgeVisible;
    PHLivePhotoView * _livePhotoView;
    NSNumber * _savedFullScreenState;
    bool  _shouldPlayHint;
    bool  _transitionInProgress;
}

@property (nonatomic, readonly) NSDictionary *clientPreviewOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *imageAnalysisView;
@property (nonatomic, readonly) UIImage *imageForAnalysis;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isPointInNonImageSubjectItems:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setupAndStartImageAnalysisIfNeeded;
- (void)_updateAnalysisButtonsContainerConstraints;
- (void)_updateImageAnalysisInteractionAnimated:(bool)arg1;
- (void)_updateLivePhotoBadgeAnimated:(bool)arg1;
- (bool)_wasJustPlaying;
- (void)adjustImageInteractionForScrollEvent:(id)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (bool)canToggleFullScreen;
- (id)clientPreviewOptions;
- (void)didEndZoomingAtScale:(double)arg1;
- (void)didScroll:(id)arg1;
- (void)didZoom:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (id)imageAnalysisView;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(bool)arg1;
- (void)imageAnalyzerWantsUpdateOverlayViews;
- (id)imageForAnalysis;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)livePhotoView:(id)arg1 canBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (double)livePhotoView:(id)arg1 extraMinimumTouchDurationForTouch:(id)arg2 withStyle:(long long)arg3;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginZooming;

@end
