
@interface NewsUI2.AudioTrackDetailsViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    void artworkCache;
    void eventHandler;
    void listeningProgressManager;
    void logoCache;
    void playbackState;
    void styler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  track;
    void trackView;
}

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (void)didTapCloseButton;
- (void)didTapPlayPauseButton;
- (void)didTapReadButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
