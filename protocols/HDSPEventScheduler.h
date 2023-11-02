
@protocol HDSPEventScheduler <NSObject>

@required

- (<HDSPEventScheduleDelegate> *)delegate;
- (void)scheduleEventForDate:(NSDate *)arg1 options:(unsigned long long)arg2;
- (void)setDelegate:(id <HDSPEventScheduleDelegate>)arg1;
- (void)unschedule;

@end
