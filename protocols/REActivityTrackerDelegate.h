
@protocol REActivityTrackerDelegate <NSObject>

@optional

- (void)activityTracker:(REActivityTracker *)arg1 didBeginActivity:(NSString *)arg2;
- (void)activityTracker:(REActivityTracker *)arg1 didBeginActivity:(NSString *)arg2 forObject:(id)arg3;
- (void)activityTracker:(REActivityTracker *)arg1 didEndActivity:(NSString *)arg2;
- (void)activityTracker:(REActivityTracker *)arg1 didEndActivity:(NSString *)arg2 forObject:(id)arg3;

@end
