
@interface CALNSchedulingSnoozeUpdateTimer : NSObject <CALNActivitySchedulerDelegate, CALNSnoozeUpdateTimer> {
    <CalDateProvider> * _dateProvider;
    <CALNSnoozeUpdateTimerDelegate> * _delegate;
    NSMutableDictionary * _fireDates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _overdueDates;
    NSDate * _scheduledFireDate;
    NSDate * _scheduledOverdueDate;
    <CALNActivityScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNSnoozeUpdateTimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dequeueEventsDueBy:(id)arg1;
- (void)_scheduleTimer;
- (void)activityRun;
- (id)delegate;
- (id)initWithDateProvider:(id)arg1 scheduler:(id)arg2;
- (void)notifyDelegateOfDueAlarmsAndRescheduleTimer;
- (void)setDelegate:(id)arg1;
- (void)setFireDate:(id)arg1 leeway:(double)arg2 forEventWithIdentifier:(id)arg3;
- (void)significantTimeChange;

@end
