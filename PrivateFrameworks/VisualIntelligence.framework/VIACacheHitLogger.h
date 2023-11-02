
@interface VIACacheHitLogger : NSObject <VIAEventLogging> {
    VIAEventCache * _engagementEventCache;
    VIAFeedbackSubmitter * _feedbackSubmitter;
    NSObject<OS_dispatch_queue> * _queue;
    VIAEventCache * _rankingEventCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)feedbackNamesToLog;

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (void)didObserveEvent:(id)arg1;
- (id)initWithQueue:(id)arg1 feedbackSubmitter:(id)arg2;
- (void)logEvent:(id)arg1;

@end
