
@protocol HMDAppleMediaAccessoryInfoControllerDataSource <NSObject>

@required

- (NSString *)accessoryInfoControllerSoftwareVersionTopicForController:(HMDAppleMediaAccessoryInfoController *)arg1;
- (NSString *)accessoryInfoControllerTopicForWifiInfo;
- (HMFSoftwareVersion *)currentAccessorySoftwareVersion;
- (<HMEEventForwarder> *)eventForwarder;
- (NSString *)eventSourceIdentifierNameForAccessoryInfoController:(HMDAppleMediaAccessoryInfoController *)arg1;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;

@end
