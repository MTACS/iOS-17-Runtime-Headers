
@protocol _DASActivitySchedulerClient <NSObject>

@required

- (void)activity:(_DASActivity *)arg1 blockedOnPolicies:(NSArray *)arg2;
- (void)activity:(_DASActivity *)arg1 runWithoutHonoringPolicies:(NSArray *)arg2;
- (void)cancelActivities:(NSSet *)arg1;
- (void)handleLaunchFromDaemonForActivities:(NSSet *)arg1;
- (void)runActivities:(NSSet *)arg1;
- (void)runActivitiesWithDelayedStart:(NSSet *)arg1;
- (void)suspendActivities:(NSSet *)arg1;
- (void)willExpireBGTaskActivities:(NSSet *)arg1;

@end
