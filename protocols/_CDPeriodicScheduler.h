
@protocol _CDPeriodicScheduler <NSObject>

@required

- (void)registerJob:(_CDPeriodicSchedulerJob *)arg1;
- (void)unregisterJob:(NSString *)arg1;

@end
