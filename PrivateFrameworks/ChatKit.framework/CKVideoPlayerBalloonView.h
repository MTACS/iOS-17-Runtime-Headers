
@interface CKVideoPlayerBalloonView : CKImageBalloonView <AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate, UIGestureRecognizerDelegate> {
    CKMovieMediaObject * _mediaObject;
    bool  _observingSceneDisconnects;
    CKVideoPlayerReusePool * _playerPool;
    UIView * _playerView;
    CKReusableVideoPlayer * _reusablePlayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKVideoPlayerBalloonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMovieMediaObject *mediaObject;
@property (getter=isObservingSceneDisconnects, nonatomic) bool observingSceneDisconnects;
@property (nonatomic, retain) CKVideoPlayerReusePool *playerPool;
@property (nonatomic, retain) UIView *playerView;
@property (nonatomic, retain) CKReusableVideoPlayer *reusablePlayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cleanUpPlayerIfNeeded;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(bool)arg4;
- (id)description;
- (void)doubleTapGestureRecognized:(id)arg1;
- (bool)gestureIsOurGesture:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isObservingSceneDisconnects;
- (void)layoutSubviews;
- (id)mediaObject;
- (void)pausePlayback;
- (id)playerItem;
- (id)playerPool;
- (id)playerView;
- (id)playerViewController;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (id)reusablePlayer;
- (void)reusablePlayerDidStart;
- (void)reusablePlayerDidStop;
- (void)setMediaObject:(id)arg1;
- (void)setObservingSceneDisconnects:(bool)arg1;
- (void)setPlayerPool:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setReusablePlayer:(id)arg1;
- (void)showPlayerViewController;
- (void)startPlayingInlineVideo;
- (void)tapGestureRecognized:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
