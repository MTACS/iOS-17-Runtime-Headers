
@protocol MPCQueueControllerBehaviorHost <NSObject>

@required

- (MPCQueueControllerEdit *)beginEditWithReason:(NSString *)arg1;
- (void)behaviorDidChange;
- (NSString *)engineID;
- (MPCPlaybackEngineEventStream *)eventStream;
- (NSString *)playerID;

@end
