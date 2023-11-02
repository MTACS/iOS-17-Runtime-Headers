
@interface HMDHouseholdActivityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory> {
    NSArray * _contributors;
}

@property (nonatomic, readonly) NSArray *contributors;

- (void).cxx_destruct;
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;
- (id)contributors;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (id)initWithContributors:(id)arg1;
- (id)logEventsFromDictionary:(id)arg1;
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (id)serializeLogEvents:(id)arg1;

@end
