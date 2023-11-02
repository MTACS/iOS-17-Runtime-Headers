
@protocol HKHeartbeatSeriesFeatureStatusManagerClient <NSObject>

@required

- (void)client_heartbeatSeriesFeatureStatusManagerDidFailToUpdateWithError:(NSError *)arg1;
- (void)client_heartbeatSeriesFeatureStatusManagerDidUpdatePredominantFeature:(long long)arg1;

@end
