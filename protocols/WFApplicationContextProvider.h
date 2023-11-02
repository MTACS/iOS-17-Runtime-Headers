
@protocol WFApplicationContextProvider <NSObject>

@required

- (UIApplication *)applicationForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSBundle *)bundleForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSString *)currentUserInterfaceTypeForWFApplicationContext:(WFApplicationContext *)arg1;
- (UIWindow *)keyWindowForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSString *)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(WFApplicationContext *)arg2;

@optional

- (long long)currentApplicationStateForWFApplicationContext:(WFApplicationContext *)arg1;
- (void)setWfIdleTimerDisabled:(bool)arg1;
- (bool)shouldReverseLayoutDirection;
- (long long)userInterfaceStyle;
- (bool)wfIdleTimerDisabled;

@end
