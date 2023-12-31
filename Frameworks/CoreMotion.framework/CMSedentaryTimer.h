
@interface CMSedentaryTimer : NSObject {
    CMSedentaryTimer_Internal * _internal;
}

@property (nonatomic, readonly) CMSedentaryTimer_Internal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (void)queryAlarmDataSince:(id)arg1 withHandler:(id /* block */)arg2;
- (void)registerForAlarmsWithHandler:(id /* block */)arg1;
- (void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(bool)arg4 handler:(id /* block */)arg5;
- (void)stopTimerWithHandler:(id /* block */)arg1;

@end
