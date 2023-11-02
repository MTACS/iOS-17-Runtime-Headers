
@protocol HMDLegacyAccessorySettingsAdaptor

@required

- (<HMDLegacyAccessorySettingsAdaptorDelegate> *)delegate;
- (NSArray *)languageValueList;
- (void)setDelegate:(id <HMDLegacyAccessorySettingsAdaptorDelegate>)arg1;
- (void)updateSettingWithKeyPath:(void *)arg1 settingValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
