
@interface MPCAMSEngagementEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    AMSEngagement * _engagement;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSEngagement *engagement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)_JSONEncodableEvent:(id)arg1;
- (bool)_enqueueDataForPlaybackChangingEvent:(id)arg1 cursor:(id)arg2;
- (id)engagement;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
