
@interface SBApplicationShortcutService : NSObject <SBApplicationServerShortcutDelegate> {
    FBServiceClientAuthenticator * _serviceClientCustomImageEntitlementAuthenticator;
    FBServiceClientAuthenticator * _serviceClientFullAccessEntitlementAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_authenticateClient:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_checkEntitlementsForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_sanitizeApplicationShortcutItems:(id)arg1 withEntitlements:(unsigned long long)arg2;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)applicationServer:(id)arg1 client:(id)arg2 setDynamicApplicationShortcutItems:(id)arg3 forBundleIdentifier:(id)arg4;
- (id)init;

@end
