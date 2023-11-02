
@protocol WLAnalyticsDataSource

@required

- (void)addWorkingTime:(unsigned long long)arg1;
- (void)enable;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(WLFeaturePayload *)arg1;
- (void)setState:(NSString *)arg1;

@end
