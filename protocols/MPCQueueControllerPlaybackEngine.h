
@protocol MPCQueueControllerPlaybackEngine <NSObject>

@required

- (void)addEngineObserver:(id <MPCPlaybackEngineEventObserving>)arg1;
- (NSString *)engineID;
- (MPCPlaybackEngineEventStream *)eventStream;
- (NSString *)hostingSharedSessionID;
- (NSString *)playerID;
- (void)removeEngineObserver:(id <MPCPlaybackEngineEventObserving>)arg1;

@end
