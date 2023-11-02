
@interface HMDHH2MigrationLogEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner> {
    HMDEventCounterGroup * _counterGroup;
    HMDCounterThresholdTTRTrigger * _migrationFailureTTRTrigger;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) HMDEventCounterGroup *counterGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCounterThresholdTTRTrigger *migrationFailureTTRTrigger;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)counterGroup;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)migrationFailureTTRTrigger;
- (id)queue;
- (void)runDailyTask;

@end
