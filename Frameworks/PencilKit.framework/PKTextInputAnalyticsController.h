
@interface PKTextInputAnalyticsController : NSObject <UITextInputSessionActionAnalyticsEndingObserver> {
    double  _activePencilUsage;
    NSTimer * _eventSourceTimer;
    unsigned long long  _eventSourceUsage;
    long long  _lastActivePencilType;
    long long  _lastEventSource;
    unsigned long long  _lastEventSourceChangeTimestamp;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *eventSourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginObservingSessionAnalytics;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dispatchAnalytics;
- (void)_setupAnalyticsTimer;
- (void)_updateAnalyticsTracking;
- (void)activePencilUsage:(id)arg1;
- (void)dealloc;
- (void)didBeginSession;
- (void)didEndMatchingAccumulatorName:(id)arg1;
- (void)didUpdateToEventSource:(long long)arg1;
- (void)eventSourceDidChange:(id)arg1;
- (id)eventSourceTimer;
- (id)init;
- (id)matchingAccumulatorNames;
- (void)messageHandwritingAnalyticsWithProxyBlock:(id /* block */)arg1;
- (void)q_didBeginSession;
- (void)q_didEndMatchingAccumulatorName:(id)arg1 inputMode:(id)arg2;
- (void)setEventSourceTimer:(id)arg1;

@end
