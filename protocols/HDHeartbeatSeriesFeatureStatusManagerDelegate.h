
@protocol HDHeartbeatSeriesFeatureStatusManagerDelegate

@required

- (void)heartbeatSeriesFeatureStatusManager:(HDHeartbeatSeriesFeatureStatusManager *)arg1 didFailToUpdateWithError:(NSError *)arg2;
- (void)heartbeatSeriesFeatureStatusManager:(HDHeartbeatSeriesFeatureStatusManager *)arg1 didUpdatePredominantFeature:(long long)arg2;

@end
