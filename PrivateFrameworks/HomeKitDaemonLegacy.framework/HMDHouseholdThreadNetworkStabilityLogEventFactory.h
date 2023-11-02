
@interface HMDHouseholdThreadNetworkStabilityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory> {
    HMDThreadNetworkObserver * _threadNetworkObserver;
}

@property (nonatomic, readonly) HMDThreadNetworkObserver *threadNetworkObserver;

- (void).cxx_destruct;
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (id)initWithThreadNetworkObserver:(id)arg1;
- (id)logEventsFromDictionary:(id)arg1;
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (id)serializeLogEvents:(id)arg1;
- (id)threadNetworkObserver;

@end
