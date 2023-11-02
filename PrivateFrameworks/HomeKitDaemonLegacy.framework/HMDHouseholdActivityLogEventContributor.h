
@interface HMDHouseholdActivityLogEventContributor : HMDLogEventAnalyzer <HMDHouseholdActivityLogEventContributing> {
    HMDEventCountersManager * _countersManager;
    HMMDateProvider * _dateProvider;
    NSString * _householdGroupName;
}

@property (nonatomic, readonly) HMDEventCountersManager *countersManager;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (nonatomic, readonly) NSString *householdGroupName;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;
- (id)countersManager;
- (id)dateProvider;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;
- (void)finishCoalescingLogEvent:(id)arg1;
- (id)householdGroupForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (id)householdGroupForLogEvent:(id)arg1;
- (id)householdGroupName;
- (id)initWithHouseholdGroupName:(id)arg1 countersManager:(id)arg2 dateProvider:(id)arg3;
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;
- (void)startCoalescingLogEvent:(id)arg1;

@end
