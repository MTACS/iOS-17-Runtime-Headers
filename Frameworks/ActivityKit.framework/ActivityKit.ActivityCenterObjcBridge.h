
@interface ActivityKit.ActivityCenterObjcBridge : NSObject {
    void _activityCenter;
    void latestActivityContentUpdateByIdentifier;
    void queue;
}

@property (nonatomic, readonly) bool areActivitiesEnabled;

+ (id)shared;

- (void).cxx_destruct;
- (bool)areActivitiesEnabled;
- (void)disableActivitiesWithBundleIdentifier:(id)arg1;
- (void)endActivity:(id)arg1;
- (id)init;
- (bool)isActivityActiveWithIdentifier:(id)arg1;
- (id)observeActivitiesExceedingReducedPushBudgetWithHandler:(id /* block */)arg1;
- (id)observeActivityContentUpdatesWithHandler:(id /* block */)arg1;
- (id)observeDescriptorsWithHandler:(id /* block */)arg1;

@end
