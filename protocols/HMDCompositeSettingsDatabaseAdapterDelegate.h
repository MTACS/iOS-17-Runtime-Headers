
@protocol HMDCompositeSettingsDatabaseAdapterDelegate <NSObject>

@required

- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didConfigureWithError:(NSError *)arg2;
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didProcessCreationForModel:(id <HMDCompositeSettingsModel>)arg2;
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didProcessDeletionForModel:(id <HMDCompositeSettingsModel>)arg2;
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didProcessUpdateForModel:(id <HMDCompositeSettingsModel>)arg2;

@end
