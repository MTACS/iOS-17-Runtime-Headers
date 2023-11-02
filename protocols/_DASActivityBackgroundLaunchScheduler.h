
@protocol _DASActivityBackgroundLaunchScheduler <NSObject>

@required

- (void)backgroundAppRefreshEnabledForApp:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)disableAppRefreshForApps:(NSArray *)arg1;
- (void)endLaunchWithReason:(NSString *)arg1 forApp:(NSString *)arg2;
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(NSString *)arg2;

@end
