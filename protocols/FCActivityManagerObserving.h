
@protocol FCActivityManagerObserving <NSObject>

@optional

- (void)activeActivityDidChangeForManager:(FCActivityManager *)arg1;
- (void)activeActivityLifetimeDidChangeForManager:(FCActivityManager *)arg1;
- (void)activeModeDidChangeForManager:(FCActivityManager *)arg1;
- (void)activityManager:(FCActivityManager *)arg1 lifetimeDescriptionsDidChangeForActivity:(id <FCActivityDescribing>)arg2;
- (void)activityManager:(FCActivityManager *)arg1 suggestedActivityDidChangeForLocation:(long long)arg2;
- (void)availableActivitiesDidChangeForManager:(FCActivityManager *)arg1;

@end
