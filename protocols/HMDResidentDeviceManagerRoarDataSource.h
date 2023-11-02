
@protocol HMDResidentDeviceManagerRoarDataSource <HMDResidentDeviceManagerDataSource>

@required

- (<HMDResidentDeviceManagerRoarBackingStore> *)createBackingStoreForHome:(HMDHome *)arg1;
- (<HMDPrimaryResidentDiscoveryManager> *)createPrimaryResidentDiscoveryManagerWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (HMFFuture *)firstCloudKitImportFuture;

@end
