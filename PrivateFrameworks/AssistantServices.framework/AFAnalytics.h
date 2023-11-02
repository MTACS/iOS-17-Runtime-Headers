
@interface AFAnalytics : NSObject {
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
    <AFAnalyticsService> * _service;
}

+ (id)sharedAnalytics;

- (void).cxx_destruct;
- (id)_service:(bool)arg1;
- (void)_stageEvent:(id)arg1;
- (void)_stageEvents:(id)arg1;
- (void)barrier:(id /* block */)arg1;
- (void)beginEventsGrouping;
- (void)boostQueuedEvents:(id /* block */)arg1;
- (void)endEventsGrouping;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (void)logClientFeedbackPresented:(id)arg1;
- (void)logClientFeedbackPresented:(id)arg1 dialogIdentifierProvider:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(long long)arg1 context:(id)arg2;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(bool)arg3;
- (void)logEventWithType:(long long)arg1 contextProvider:(id /* block */)arg2;
- (void)logEventWithType:(long long)arg1 contextProvider:(id /* block */)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(long long)arg1 contextResolver:(id /* block */)arg2;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(bool)arg4;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(id /* block */)arg3 contextProvidingQueue:(id)arg4;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(id /* block */)arg3;
- (void)logEvents:(id)arg1;
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;
- (id)newTurnBasedInstrumentationContext;
- (void)setService:(id)arg1;

@end
