
@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener> {
    DNDState * _currentState;
    unsigned long long  _lockState;
    DNDStateService * _notificationsStateService;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_queue_currentAWDMetricState;
- (void)_queue_postAWDMetric;
- (void)handleTransitionToUILocked:(bool)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (void)resume;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end
