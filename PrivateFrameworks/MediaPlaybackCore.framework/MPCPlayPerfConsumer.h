
@interface MPCPlayPerfConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSString * _lastSiriReferenceIdentifier;
    MPCPlaybackEngine * _playbackEngine;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)analyticsContentType:(long long)arg1;
+ (id)analyticsFormat:(id)arg1;
+ (id)coreAnalyticsEventNameWithEventType:(id)arg1;
+ (id)identifier;

- (void).cxx_destruct;
- (void)generatePlayPerfSignposts:(id)arg1;
- (void)handleMetrics:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)playbackEngine;
- (void)publishPlaybackMetrics:(id)arg1;
- (void)sendMetricsToCoreAnalytics:(id)arg1;
- (void)sendMetricsToSiriSelfLogger:(id)arg1;
- (void)setupErrorHandlerForEventType:(id)arg1 errorKey:(id)arg2 prefix:(id)arg3;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
