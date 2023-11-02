
@protocol MPCPlaybackEngineEventObserving <NSObject>

@optional

- (void)engine:(MPCPlaybackEngine *)arg1 didReachEndOfQueueWithReason:(NSString *)arg2;

@end
