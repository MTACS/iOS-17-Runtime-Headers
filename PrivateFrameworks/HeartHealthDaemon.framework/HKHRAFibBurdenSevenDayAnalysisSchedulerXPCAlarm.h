
@interface HKHRAFibBurdenSevenDayAnalysisSchedulerXPCAlarm : NSObject <HDProfileReadyObserver, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm> {
    id /* block */  _dateGenerator;
    NSUserDefaults * _defaults;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _scheduler;
    <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate> * delegate;
}

@property (nonatomic) <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate> *delegate;

- (void).cxx_destruct;
- (id)_determineNextEventDateComponents;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)_queue_beginReceivingAlarmEvents;
- (void)_queue_scheduleEvent;
- (void)_scheduleEventWithCompletion:(id /* block */)arg1;
- (void)_stop;
- (void)_unitTest_beginReceivingAlarmEvents;
- (id)delegate;
- (id)initWithProfile:(id)arg1;
- (id)initWithScheduler:(id)arg1 profile:(id)arg2 userDefaults:(id)arg3 queue:(id)arg4 dateGenerator:(id /* block */)arg5 shouldAutomaticallyStart:(bool)arg6;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
