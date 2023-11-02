
@protocol HMDFetchedSettingsDriver <NSObject>

@required

- (<HMDFetchedSettingsDriverDelegate> *)delegate;
- (void)fetchSettingsForKeyPaths:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)languageValueListWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setDelegate:(id <HMDFetchedSettingsDriverDelegate>)arg1;
- (void)startWithKeyPaths:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)updateSettingWithKeyPath:(void *)arg1 boolSettingValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, HMSettingBooleanValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSettingWithKeyPath:(void *)arg1 integerSettingValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, HMSettingIntegerValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSettingWithKeyPath:(void *)arg1 languageSettingValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, HMSettingLanguageValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSettingWithKeyPath:(void *)arg1 primaryUserInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, HMAccessoryInfoPrimaryUser *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
