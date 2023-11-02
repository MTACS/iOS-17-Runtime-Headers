
@interface _HMPrivacySettingsProvider : NSObject <_HMPrivacySettingsProvider> {
    unsigned long long  _cachedAuthorizationStatus;
}

@property (readonly) unsigned long long cachedAuthorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)cachedAuthorizationStatus;
- (unsigned long long)queryAuthorizationStatus;
- (void)requestAccessWithQueue:(id)arg1 completion:(id /* block */)arg2;

@end
