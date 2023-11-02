
@protocol HMDHouseholdActivityLogEventContributing

@required

- (void)coalesceLogEvent:(HMDHouseholdActivityLogEvent *)arg1 fromSourceEvent:(HMDHouseholdActivityLogEvent *)arg2;
- (void)contributeLogEvent:(HMDHouseholdActivityLogEvent *)arg1 toCoreAnalyticsEvent:(NSMutableDictionary *)arg2;
- (void)contributeLogEvent:(HMDHouseholdActivityLogEvent *)arg1 toSerializedMetric:(NSMutableDictionary *)arg2;
- (void)deleteCountersAfterDate:(NSDate *)arg1;
- (void)deleteCountersBeforeDate:(NSDate *)arg1;
- (void)deserializeLogEvent:(HMDHouseholdActivityLogEvent *)arg1 fromSerializedMetric:(NSDictionary *)arg2;
- (void)finishCoalescingLogEvent:(HMDHouseholdActivityLogEvent *)arg1;
- (void)populateLogEvent:(HMDHouseholdActivityLogEvent *)arg1 forHomeWithUUID:(NSUUID *)arg2 associatedToDate:(NSDate *)arg3;
- (void)startCoalescingLogEvent:(HMDHouseholdActivityLogEvent *)arg1;

@end
