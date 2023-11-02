
@interface CFXClipPlayerViewController : JFXCompositionPlayerViewController {
    UIViewController<JFXAVPlayerViewer> * _avPlayerView;
    CFXClip * _clip;
    CFXClipCompositionDataSource * _clipDataSource;
    UIView * _placeholderContainerView;
    UIView * _playerContainerView;
}

@property (nonatomic) UIViewController<JFXAVPlayerViewer> *avPlayerView;
@property (nonatomic, retain) CFXClip *clip;
@property (nonatomic, retain) CFXClipCompositionDataSource *clipDataSource;
@property (nonatomic, retain) UIView *placeholderContainerView;
@property (nonatomic, retain) UIView *playerContainerView;

- (void).cxx_destruct;
- (id)avPlayerView;
- (id)clip;
- (id)clipDataSource;
- (void)displayCompositionUpdateLoadingView:(id)arg1;
- (id)placeholderContainerView;
- (id)playerContainerView;
- (id)playerViewer;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)reloadClip;
- (void)reloadClipAndSeekToStart:(bool)arg1;
- (void)setAvPlayerView:(id)arg1;
- (void)setClip:(id)arg1;
- (void)setClipDataSource:(id)arg1;
- (void)setPlaceholderContainerView:(id)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (void)updateCompositionForEffectChange;
- (void)viewWillAppear:(bool)arg1;

@end
