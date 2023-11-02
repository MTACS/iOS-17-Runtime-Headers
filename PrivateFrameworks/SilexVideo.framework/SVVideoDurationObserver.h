
@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving> {
    double  _duration;
    SVKeyValueObserver * _playerItemDurationObserver;
    <SVPlayerItemObserving> * _playerItemObserver;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SVKeyValueObserver *playerItemDurationObserver;
@property (nonatomic, readonly) <SVPlayerItemObserving> *playerItemObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (double)duration;
- (id)initWithPlayerItemObserver:(id)arg1;
- (void)onChange:(id /* block */)arg1;
- (id)playerItemDurationObserver;
- (id)playerItemObserver;
- (void)setDuration:(double)arg1;
- (void)setPlayerItemDurationObserver:(id)arg1;
- (void)updateDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
