
@protocol HMDStereoPairSettingsControllerDataSource <NSObject>

@required

- (<HMEEventForwarder> *)eventForwarder;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;
- (HMDHome *)home;
- (<HMESubscriptionProviding> *)localAndRemoteSubscriptionProvider;
- (NSDictionary *)uuidToMediaSystems;

@end
