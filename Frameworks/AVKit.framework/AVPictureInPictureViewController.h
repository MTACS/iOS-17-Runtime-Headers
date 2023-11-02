
@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {
    AVPictureInPictureViewController * _contentViewController;
    <AVPictureInPictureViewControllerDelegate> * _delegate;
    AVPictureInPicturePlayerLayerView * _pictureInPicturePlayerLayerView;
    AVPlayerController * _playerController;
    bool  _shouldShowAlternateActionButtonImage;
}

@property (nonatomic, retain) AVPictureInPictureViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool shouldShowAlternateActionButtonImage;
@property (nonatomic, readonly) bool shouldShowLoadingIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (void)didAnimatePictureInPictureStop;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;
- (void)loadView;
- (id)pictureInPicturePlayerLayerView;
- (id)playerController;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setShouldShowAlternateActionButtonImage:(bool)arg1;
- (bool)shouldShowAlternateActionButtonImage;
- (void)willAnimatePictureInPictureStart;

@end
