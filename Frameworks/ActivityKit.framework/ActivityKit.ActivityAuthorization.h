
@interface ActivityKit.ActivityAuthorization : NSObject {
    void authorizationClient;
    void lock;
}

- (void).cxx_destruct;
- (bool)areActivitiesEnabledForBundleId:(id)arg1;
- (bool)areFrequentPushesEnabledFor:(id)arg1;
- (id)init;
- (bool)setActivitiesWithEnabled:(bool)arg1 for:(id)arg2 source:(long long)arg3 error:(id*)arg4;
- (bool)setActivitiesWithEnabled:(bool)arg1 forBundleId:(id)arg2 error:(id*)arg3;
- (bool)setFrequentPushesWithEnabled:(bool)arg1 for:(id)arg2 error:(id*)arg3;

@end
