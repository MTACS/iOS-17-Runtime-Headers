
@protocol MTTimerSchedulerDelegate <NSObject>

@required

- (void)scheduler:(MTTimerScheduler *)arg1 didChangeNextTimer:(MTTimer *)arg2;
- (void)scheduler:(MTTimerScheduler *)arg1 didFireTimer:(MTScheduledObject *)arg2;

@end
