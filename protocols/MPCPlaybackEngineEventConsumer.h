
@protocol MPCPlaybackEngineEventConsumer <NSObject>

@required

+ (NSString *)identifier;

- (void)subscribeToEventStream:(id <MPCPlaybackEngineEventStreamSubscription>)arg1;
- (void)unsubscribeFromEventStream:(id <MPCPlaybackEngineEventStreamSubscription>)arg1;

@end
