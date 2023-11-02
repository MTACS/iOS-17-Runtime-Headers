
@interface MPCAssistantAnalyticsEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _lastSiriReferenceIdentifierForPlaybackStart;
    MPCPlaybackEngine * _playbackEngine;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)_handleAssetLoadEnd:(id)arg1 cursor:(id)arg2;
- (id)_validateAndBuildContextWithEvent:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)playbackEngine;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
