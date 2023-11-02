
@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving> {
    id /* block */  _changeBlock;
    AVPlayerItem * _item;
    SVKeyValueObserver * _observer;
    AVPlayer * _player;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) AVPlayerItem *item;
@property (nonatomic, readonly) SVKeyValueObserver *observer;
@property (nonatomic, readonly) AVPlayer *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPlayer:(id)arg1;
- (id)item;
- (id)observer;
- (void)onChange:(id /* block */)arg1;
- (id)player;
- (void)setItem:(id)arg1;

@end
