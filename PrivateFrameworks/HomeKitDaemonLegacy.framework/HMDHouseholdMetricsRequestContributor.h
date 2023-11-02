
@interface HMDHouseholdMetricsRequestContributor : HMDHouseholdActivityLogEventContributor <HMDHouseholdMetricsRequestCountProvider>

- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;
- (void)incrementRequestCountForHomeUUID:(id)arg1 date:(id)arg2;
- (id)initWithCountersManager:(id)arg1 dateProvider:(id)arg2;
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;

@end
