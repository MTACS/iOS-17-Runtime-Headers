
@interface MPCNonZeroEffectiveRateTask : MPCDeferrableTask {
    AVPlayerItem * _playerItem;
}

@property (nonatomic) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (void)effectiveRateDidChange:(id)arg1;
- (id)initWithPlayerItem:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 queue:(id)arg4 block:(id /* block */)arg5;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (void)taskDidExecute;

@end
