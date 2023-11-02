
@protocol HMDCoreAnalyticsLogEventObserverDelegateDataSource

@required

- (NSString *)PRKitDateString;
- (NSString *)PRKitUUIDString;
- (HMDAccessory *)accessoryForIdentifier:(NSString *)arg1;
- (void)addConfigurationChangedObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDConfigurationLogEvent *, void*
- (HMDConfigurationLogEvent *)cachedConfiguration;
- (HMDHomeConfigurationLogEvent *)cachedHomeConfigurationForHomeUUID:(NSUUID *)arg1;
- (<HMDMetricsDeviceStateProvider> *)deviceStateProvider;

@end
