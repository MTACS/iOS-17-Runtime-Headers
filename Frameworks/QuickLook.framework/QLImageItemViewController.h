
@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver, QLImageAnalysisManagerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIView * _analysisButtonContainer;
    NSLayoutConstraint * _analysisButtonContainerBottomConstraint;
    NSLayoutConstraint * _analysisButtonContainerRightConstraint;
    QLAnimatedImage * _animatedImage;
    double  _currentPlaybackTime;
    QLImageAnalysisManager * _imageAnalysisManager;
    bool  _imageIsAnimated;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageView;
    double  _initialTimeStamp;
    bool  _isFullScreen;
    NSNumber * _savedFullScreenState;
}

@property (nonatomic, readonly) NSDictionary *clientPreviewOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *imageAnalysisView;
@property (nonatomic, readonly) UIImage *imageForAnalysis;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupAndStartImageAnalysisIfNeeded;
- (void)_updateAnalysisButtonsContainerConstraints;
- (void)adjustImageInteractionForScrollEvent:(id)arg1;
- (void)animationTimerFired:(double)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (id)clientPreviewOptions;
- (void)didScroll:(id)arg1;
- (void)didZoom:(id)arg1;
- (id)draggableView;
- (bool)draggableViewShouldStartDragSession:(id)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (id)imageAnalysisView;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(bool)arg1;
- (void)imageAnalyzerWantsUpdateOverlayViews;
- (id)imageForAnalysis;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)viewDidLoad;

@end
