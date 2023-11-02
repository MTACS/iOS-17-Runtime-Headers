
@protocol NPKBiometricPassPreflightManagerDataSource <NSObject>

@required

- (void)biometricPassPreflightManager:(void *)arg1 provisionedCredentialCountsForType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NPKBiometricPassPreflightManager *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (NSString *)biometricPassPreflightManagerPairedDeviceOSVersion:(NPKBiometricPassPreflightManager *)arg1;

@end
