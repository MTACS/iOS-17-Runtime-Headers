
@interface PlayerKVOHelper : NSObject {
    id /* block */  _block;
    AVPlayer * _player;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) AVPlayer *player;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 block:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)setBlock:(id /* block */)arg1;
- (void)setPlayer:(id)arg1;

@end
