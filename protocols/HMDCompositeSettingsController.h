
@protocol HMDCompositeSettingsController <NSObject>

@required

- (bool)configured;
- (void)fetchSettingForKeyPath:(void *)arg1 callerVersion:(void *)arg2 callerPrivilege:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, HMFVersion *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDCompositeSettingOperationResult *, void*
- (void)fetchSettingsForKeyPaths:(void *)arg1 callerVersion:(void *)arg2 callerPrivilege:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, HMFVersion *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)updateSettingForKeyPath:(void *)arg1 value:(void *)arg2 callerVersion:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, HMDCompositeSettingValue *, HMFVersion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDCompositeSettingOperationResult *, void*
- (void)updateSettingsForKeyPaths:(void *)arg1 callerVersion:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, HMFVersion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDCompositeSettingOperationResult *, void*

@end
