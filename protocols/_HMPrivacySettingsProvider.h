
@protocol _HMPrivacySettingsProvider <NSObject>

@required

- (unsigned long long)cachedAuthorizationStatus;
- (unsigned long long)queryAuthorizationStatus;
- (void)requestAccessWithQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
