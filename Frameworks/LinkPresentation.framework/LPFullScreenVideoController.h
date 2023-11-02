
@interface LPFullScreenVideoController : NSObject <AVPlayerViewControllerDelegatePrivate> {
    AVPlayer * _player;
    AVPlayerController * _playerController;
    __AVPlayerLayerView * _playerLayerView;
    LPAVPlayerViewController * _playerViewController;
    LPVisualMediaView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didCompleteDismissal;
- (void)dismiss;
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (bool)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)present;
- (void)setUpFullScreenVideoViewControllerIfNeeded;

@end
