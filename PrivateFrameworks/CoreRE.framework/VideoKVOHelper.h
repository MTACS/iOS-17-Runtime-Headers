
@interface VideoKVOHelper : NSObject {
    AVPlayer * _player;
    id /* block */  _playerBlock;
    id /* block */  _playerItemBlock;
    id  _timeObserver;
}

@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, copy) id /* block */ playerBlock;
@property (nonatomic, copy) id /* block */ playerItemBlock;
@property (nonatomic, retain) id timeObserver;

- (void).cxx_destruct;
- (void)addAVPlayerItemObserverWithBlock:(id /* block */)arg1;
- (void)addAVPlayerRateObserverWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (id /* block */)playerBlock;
- (id /* block */)playerItemBlock;
- (void)setPlayer:(id)arg1;
- (void)setPlayerBlock:(id /* block */)arg1;
- (void)setPlayerItemBlock:(id /* block */)arg1;
- (void)setTimeObserver:(id)arg1;
- (id)timeObserver;

@end
