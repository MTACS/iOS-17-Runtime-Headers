
@protocol ARDaemonReplayDelegate <NSObject>

@required

- (void)replayDidFailWithError:(NSError *)arg1;
- (void)replayDidStartWithReplayTime:(double)arg1;
- (void)replayDidStop;
- (void)replayDidUpdateResourceWithKey:(NSString *)arg1 atTime:(double)arg2;

@end
