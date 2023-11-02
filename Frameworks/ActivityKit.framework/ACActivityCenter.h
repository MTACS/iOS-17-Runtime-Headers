
@interface ACActivityCenter : NSObject {
    _TtC11ActivityKit24ActivityCenterObjcBridge * _activityCenter;
}

- (void).cxx_destruct;
- (bool)areActivitiesEnabled;
- (void)disableActivitiesWithBundleIdentifier:(id)arg1;
- (void)endActivity:(id)arg1;
- (id)init;
- (bool)isActivityActive:(id)arg1;
- (id)observeActivitiesExceedingReducedPushBudgetWithHandler:(id /* block */)arg1;
- (id)observeContentUpdatesWithHandler:(id /* block */)arg1;
- (id)observeDescriptorsWithHandler:(id /* block */)arg1;

@end
