
@interface ACActivityAuthorization : NSObject {
    _TtC11ActivityKit21ActivityAuthorization * _activityAuthorization;
}

@property (nonatomic, retain) _TtC11ActivityKit21ActivityAuthorization *activityAuthorization;

- (void).cxx_destruct;
- (id)activityAuthorization;
- (bool)areActivitiesEnabledForBundleId:(id)arg1;
- (bool)areFrequentPushesEnabledForBundleId:(id)arg1;
- (id)init;
- (void)setActivitiesEnabled:(bool)arg1 forBundleId:(id)arg2;
- (void)setActivitiesEnabled:(bool)arg1 forBundleId:(id)arg2 source:(long long)arg3;
- (void)setActivityAuthorization:(id)arg1;
- (void)setFrequentPushesEnabled:(bool)arg1 forBundleId:(id)arg2;

@end
