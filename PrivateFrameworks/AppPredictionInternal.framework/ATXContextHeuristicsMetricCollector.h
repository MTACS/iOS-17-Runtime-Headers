
@interface ATXContextHeuristicsMetricCollector : NSObject

- (void)fillWeeklyStatisticsMetricWithSpotlightUIStream:(id)arg1 biomeConfig:(id)arg2;
- (id)lifetimeEngagementMetricsWithBiomeConfig:(id)arg1;
- (id)lifetimeEngagementMetricsWithPublisher:(id)arg1;
- (void)postLifetimeEngagementMetrics;
- (void)postRecentsMetrics;
- (void)postWeeklyMetrics;
- (void)postZkwMetrics;
- (id)recentsMetricsWithBiomeConfig:(id)arg1;
- (id)saveableBookmarkDictionaryFromTracker:(id)arg1;
- (id)spotlightUIBookmark;
- (id)trackerFromBookmarkDictionary:(id)arg1;

@end
