
@protocol HMDSettingsControllerProtocol <HMFObject, AWDHMDSettingsControllerProtocol>

@required

- (NSArray *)allObjectIdentifiers;
- (void)configure;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (void)loadWithModels:(NSArray *)arg1;
- (<HMDSettingTransaction> *)migrateSettingsTransactionWithTransaction:(id <HMDSettingTransaction>)arg1 error:(id*)arg2;
- (NSArray *)modelsToMakeSettings;
- (HMDSetting *)settingForKeyPath:(NSString *)arg1;
- (void)updateWithValue:(void *)arg1 onSetting:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMSettingValue *, HMDSetting *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
