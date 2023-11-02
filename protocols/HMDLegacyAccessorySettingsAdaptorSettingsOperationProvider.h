
@protocol HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider

@required

- (void)languageValueListWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)updateSettingWithKeyPath:(void *)arg1 settingValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, HMImmutableSettingValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
