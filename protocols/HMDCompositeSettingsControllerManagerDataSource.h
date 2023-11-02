
@protocol HMDCompositeSettingsControllerManagerDataSource

@required

- (<HMEEventForwarder> *)eventForwarder;
- (NSString *)eventSourceForCompositeSettingsController;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandle;
- (NSArray *)homes;
- (<HMDLanguageValueListSettingDataProvider> *)languageListProviderForHomeUUID:(NSUUID *)arg1;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (HMDFetchedAccessorySettingsController *)settingsControllerForAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2;
- (<HMDCompositeSettingsSiriEndpointProfileBridge> *)siriEndpointBridge;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end
