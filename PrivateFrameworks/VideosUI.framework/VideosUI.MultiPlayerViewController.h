
@interface VideosUI.MultiPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, UIDropInteractionDelegate, UIGestureRecognizerDelegate, VUIMultiPlayerViewController> {
    void $__lazy_storage_$_activityTapGesture;
    void $__lazy_storage_$_blurView;
    void $__lazy_storage_$_detailsViewLayout;
    void $__lazy_storage_$_ghostPlayerViewController;
    void $__lazy_storage_$_grabberView;
    void $__lazy_storage_$_headerPresenter;
    void $__lazy_storage_$_headerView;
    void $__lazy_storage_$_imageView;
    void $__lazy_storage_$_metricsRecorder;
    void $__lazy_storage_$_panGesture;
    void $__lazy_storage_$_playerPanGesture;
    void $__lazy_storage_$_playerPinchGesture;
    void $__lazy_storage_$_playerViewLayout;
    void bottomConstraint;
    void cancellables;
    void delegate;
    void detailsViewController;
    void exitFullscreenCompletion;
    void fullscreenPadding;
    void fullscreenPlayerViewController;
    void inactivityTimeout;
    void inactivityTimer;
    void initiallyShowsDetails;
    void isDetailsViewControllerVisible;
    void isSupportedScreenSize;
    void leadingConstraint;
    void playerView;
    void presentationPlayerViewControllers;
    void prospectivePlayerView;
    void stateMachine;
    void swappedPlayerIndices;
    void topConstraint;
    void trailingConstraint;
}

@property (nonatomic, retain) VUIImageProxy *backgroundImageProxy;
@property (nonatomic) <VUIMultiPlayerViewControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long distribution;
@property (nonatomic, readonly) bool isShowingProspectivePlayer;
@property (nonatomic, readonly) NSArray *playerViewControllers;

- (void).cxx_destruct;
- (void)addPlayerViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)backgroundImageProxy;
- (void)captureAndShowPlayerScreenshots;
- (id)delegate;
- (unsigned long long)distribution;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)enterFullscreenWithPlayerViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)exitFullscreenWithCompletion:(id /* block */)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isShowingProspectivePlayer;
- (bool)isSupportedScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)onPanWithGesture:(id)arg1;
- (id)playerViewController:(id)arg1 targetViewForDismissalAnimationWithProposedTargetView:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (id)playerViewControllers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForPlayerViewController:(id)arg1;
- (void)recordMetricsEventWithIdentifier:(id)arg1 impressionsData:(id)arg2 locationData:(id)arg3 didAddPlayer:(bool)arg4;
- (void)removePlayerViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)replacePlayerViewController:(id)arg1 atIndex:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setBackgroundImageProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsViewControllerVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setProspectivePlayerVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setProspectivePlayerVisible:(bool)arg1 atIndex:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewPinchedWithGesture:(id)arg1;
- (void)viewSwipedWithGesture:(id)arg1;
- (void)viewTappedWithGesture:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
