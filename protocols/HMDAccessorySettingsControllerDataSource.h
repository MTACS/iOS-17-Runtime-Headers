
@protocol HMDAccessorySettingsControllerDataSource

@required

- (HMDAccessorySetupMetricDispatcher *)accessorySetupMetricDispatcher;
- (HMDBackingStore *)backingStore;
- (HMDCurrentAccessorySetupMetricDispatcher *)currentAccessorySetupMetricDispatcher;
- (HMDHome *)home;
- (NSArray *)modelsToMakeSettingsForController:(HMDAccessorySettingsController *)arg1 parentUUID:(NSUUID *)arg2;
- (NSArray *)modelsToMigrateSettingsForController:(HMDAccessorySettingsController *)arg1;
- (void)removeManagedConfigurationProfileWithProfileData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setHome:(HMDHome *)arg1;
- (void)setSetupActivity:(HMFActivity *)arg1;
- (void)setSetupStartTimestamp:(double)arg1;
- (HMFActivity *)setupActivity;
- (double)setupStartTimestamp;
- (bool)supportsUserMediaSettings;

@end
