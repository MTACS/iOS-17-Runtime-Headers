
@protocol _DASActivityBackgroundTasksSchedulerDelegate <NSObject>

@required

- (void)scheduler:(id <_DASActivityBackgroundTasksScheduler>)arg1 handleLaunchForActivities:(NSSet *)arg2;
- (void)scheduler:(id <_DASActivityBackgroundTasksScheduler>)arg1 willExpireActivities:(NSSet *)arg2;

@end
