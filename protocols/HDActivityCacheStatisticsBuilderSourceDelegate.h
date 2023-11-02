
@protocol HDActivityCacheStatisticsBuilderSourceDelegate

@required

- (NSArray *)activityCacheStatisticsBuilder:(HDActivityCacheStatisticsBuilder *)arg1 sourceOrderForObjectType:(HKObjectType *)arg2;
- (long long)localDeviceSourceIdentifier;

@end
