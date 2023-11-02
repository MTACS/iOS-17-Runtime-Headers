
@interface SeymourUI.SessionAudioPlayerViewController : UIViewController {
    void contentOverlayView;
    void currentLayoutEnvironment;
    void currentLayoutKind;
    void delegate;
    void isPictureInPictureActive;
    void layoutProvider;
    void playerView;
    void presenter;
    void previousBounds;
    void settingsPopoverSourceView;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;

@end
