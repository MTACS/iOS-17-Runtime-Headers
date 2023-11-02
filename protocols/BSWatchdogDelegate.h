
@protocol BSWatchdogDelegate <NSObject>

@optional

- (void)watchdogCancelled:(BSWatchdog *)arg1;
- (void)watchdogFired:(BSWatchdog *)arg1;
- (void)watchdogStarted:(BSWatchdog *)arg1;

@end
