
@protocol HMDPrimaryResidentCapabilitiesAggregatorDataSource <NSObject>

@required

- (<HMEEventForwarder> *)eventForwarder;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;
- (bool)isCurrentDevicePrimaryResident;
- (<HMESubscriptionProviding> *)localAndRemoteSubscriptionProvider;
- (id)primaryResidentChangeMonitor;

@end
