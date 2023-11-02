
@interface VideosUI.PlaybackContainerViewController : UIViewController <VUIPlaybackContainerViewController, VUIPlaybackUpNextControllerDelegate> {
    void $__lazy_storage_$_fullscreenButton;
    void $__lazy_storage_$_fullscreenButtonLayout;
    void cancellables;
    void delegate;
    void isAnimatingPiP;
    void isPiPed;
    void multiPlayerViewController;
    void pipTargetView;
    void playerViewController;
    void postPlayViewController;
}

@property (nonatomic) <VUIPlaybackContainerViewControllerDelegate> *delegate;
@property (nonatomic, readonly) bool shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)backgroundPlaybackWillBegin;
- (id)delegate;
- (void)embedMultiPlayerViewController:(id)arg1;
- (void)enterPictureInPicture;
- (void)exitPictureInPictureWithCompletion:(id /* block */)arg1;
- (void)hidePictureInPictureWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadPostPlayForMediaItem:(id)arg1;
- (void)mediaInfoDidChangeTo:(id)arg1 canPlay:(bool)arg2 wasAutoPlayed:(bool)arg3;
- (void)playbackUpNextControllerReadyToBeDisplayed;
- (void)presentPlayerViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)removePostPlayViewController;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)unembedMultiPlayerViewController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
