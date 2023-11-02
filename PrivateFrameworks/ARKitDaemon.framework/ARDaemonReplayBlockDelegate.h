
@interface ARDaemonReplayBlockDelegate : NSObject <ARDaemonReplayDelegate> {
    id /* block */  _replayFailedBlock;
    id /* block */  _replayStartedBlock;
    id /* block */  _replayStoppedBlock;
    id /* block */  _replayUpdatedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ replayFailedBlock;
@property (nonatomic, copy) id /* block */ replayStartedBlock;
@property (nonatomic, copy) id /* block */ replayStoppedBlock;
@property (nonatomic, copy) id /* block */ replayUpdatedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)replayDidFailWithError:(id)arg1;
- (void)replayDidStartWithReplayTime:(double)arg1;
- (void)replayDidStop;
- (void)replayDidUpdateResourceWithKey:(id)arg1 atTime:(double)arg2;
- (id /* block */)replayFailedBlock;
- (id /* block */)replayStartedBlock;
- (id /* block */)replayStoppedBlock;
- (id /* block */)replayUpdatedBlock;
- (void)setReplayFailedBlock:(id /* block */)arg1;
- (void)setReplayStartedBlock:(id /* block */)arg1;
- (void)setReplayStoppedBlock:(id /* block */)arg1;
- (void)setReplayUpdatedBlock:(id /* block */)arg1;

@end
