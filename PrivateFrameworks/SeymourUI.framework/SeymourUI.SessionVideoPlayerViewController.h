
@interface SeymourUI.SessionVideoPlayerViewController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _requiresLinearPlayback;
    void airplayAndSettingsControlsView;
    void gymKitResumeMachineView;
    void overlayView;
    void playbackViewController;
    void presenter;
    void settingsControlItem;
    void settingsPopoverSourceView;
    void tapGestureRecognizer;
    void transportBarControlsCoordinator;
    void videoBoundsObserver;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)didTapMediaPlayerViewWithTapGestureRecognizer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
