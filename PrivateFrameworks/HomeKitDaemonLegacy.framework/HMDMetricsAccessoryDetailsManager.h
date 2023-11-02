
@interface HMDMetricsAccessoryDetailsManager : HMFObject <HMDHouseholdMetricsLogEventFactory> {
    <HMDHouseholdMetricsDataSource> * _dataSource;
}

@property (nonatomic, readonly) <HMDHouseholdMetricsDataSource> *dataSource;

- (void).cxx_destruct;
- (id)accessoryCategoryLogEventsForHomeWithUUID:(id)arg1;
- (id)dataSource;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (id)householdMetricsLogEventFactory;
- (id)initWithDataSource:(id)arg1;
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;

@end
