
@interface HPSSpatialProfileEarDotsMovieView : UIView {
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    AVPlayerLayer * _playerLayer;
    id  _timeObserverToken;
}

@property (retain) AVPlayer *player;
@property (retain) id timeObserverToken;

- (void).cxx_destruct;
- (void)addBoundaryTimeObserver;
- (void)dealloc;
- (void)hideDots;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)player;
- (void)removeBoundaryTimeObserver;
- (void)setPlayer:(id)arg1;
- (void)setTimeObserverToken:(id)arg1;
- (void)showDots;
- (id)timeObserverToken;

@end
