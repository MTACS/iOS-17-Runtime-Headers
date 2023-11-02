
@interface CESRXPCActivity : NSObject

- (void)registerDailyANECompilationActivity;
- (void)registerDailySubscriptionCleanupActivity;
- (void)registerPeriodicPreheatActivity;
- (void)registerPostUpgradeANECompilationActivity;
- (void)registerPostUpgradeSubscriptionActivity;
- (void)registerXPCActivities;

@end
