
@interface HMDHouseholdNetworkStabilityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory> {
    HMDNetworkObserver * _networkObserver;
}

@property (nonatomic, readonly) HMDNetworkObserver *networkObserver;

- (void).cxx_destruct;
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (id)initWithNetworkObserver:(id)arg1;
- (id)logEventsFromDictionary:(id)arg1;
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (id)networkObserver;
- (id)serializeLogEvents:(id)arg1;

@end
