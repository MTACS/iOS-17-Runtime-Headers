
@interface SeymourUI.SessionViewController : UIViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, UIViewControllerTransitioningDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityTypeBehavior;
    void backgroundView;
    void bufferView;
    void castingView;
    void continueOnWatchView;
    void displayPreferencesViewController;
    void eventHub;
    void instructionsView;
    void introSequenceCompleted;
    void introSequenceView;
    void mediaPlayerDisplay;
    void menuGestureRecognizer;
    void miniPlayerHost;
    void ongoingWorkoutDetectedView;
    void overlayConstraints;
    void overlayView;
    void pictureInPictureSurrogate;
    void platform;
    void presenter;
    void sessionContainer;
    void summaryViewController;
    void watchDiscoveryView;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)handleEscapeKeyCommand;
- (void)handleSpacebarCommand;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)menuButtonTapped;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (id)preferredFocusEnvironments;
- (bool)prefersHomeIndicatorAutoHidden;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
