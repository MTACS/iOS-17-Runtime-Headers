
@interface FMFScheduler : NSObject {
    <FMFSchedulerDelegate> * _delegate;
    NSArray * _schedules;
    FMXPCTimer * _timer;
}

@property (nonatomic, readonly) NSArray *currentSchedules;
@property (nonatomic, readonly) <FMFSchedulerDelegate> *delegate;
@property (nonatomic, retain) NSArray *schedules;
@property (nonatomic, retain) FMXPCTimer *timer;

+ (id)_nextStartOrEndDateFrom:(id)arg1 forSchedules:(id)arg2;

- (void).cxx_destruct;
- (void)_registerForSignificantTimeChangeNotifications;
- (void)_significantTimeChange:(id)arg1;
- (void)_updateScheduleTimer;
- (id)currentSchedules;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)scheduleTimerFired;
- (id)schedules;
- (void)setSchedules:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
