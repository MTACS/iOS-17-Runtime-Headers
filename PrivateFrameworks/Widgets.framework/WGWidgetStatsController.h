
@interface WGWidgetStatsController : NSObject {
    bool  _bootstrapFavoriteWidgets;
    WGWidgetDiscoveryController * _discoveryController;
    NCLaunchStats * _launchStats;
}

@property (nonatomic) bool bootstrapFavoriteWidgets;
@property (nonatomic, readonly) WGWidgetDiscoveryController *discoveryController;
@property (nonatomic, readonly) NCLaunchStats *launchStats;

- (void).cxx_destruct;
- (void)_favoriteWidgetIdentifiersDidUpdate:(id)arg1;
- (void)_setupLaunchStats;
- (void)_teardownLaunchStats;
- (void)_updateFavoriteWidgetIdentifiers;
- (bool)bootstrapFavoriteWidgets;
- (void)dealloc;
- (id)discoveryController;
- (id)initWithDiscoveryController:(id)arg1;
- (id)launchStats;
- (void)launchStats:(id)arg1 incomingRecommendationForBundleIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)notePreWarmHasEnded:(id)arg1 withResult:(long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)notePreWarmHasStarted:(id)arg1 withTriggerType:(int)arg2 withSequence:(unsigned long long)arg3;
- (void)registerWidgetForPredictionEvents:(id)arg1;
- (void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2;
- (void)setBootstrapFavoriteWidgets:(bool)arg1;
- (void)unregisterWidgetForPredictionEvents:(id)arg1;

@end
