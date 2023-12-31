
@protocol MTAlarmScheduleDelegate <NSObject>

@required

- (void)scheduler:(MTAlarmScheduler *)arg1 didChangeNextAlarm:(MTScheduledObject *)arg2;
- (void)scheduler:(MTAlarmScheduler *)arg1 didFireAlarm:(MTScheduledObject *)arg2;

@end
