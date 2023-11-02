
@interface CPApplicationLauncherSwift : NSObject {
    void behaviors;
    void featureFlags;
    void pegasusLaunchBehavior;
}

- (void).cxx_destruct;
- (void)authorizePiPForActivitySession:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)launchAppForActivitySession:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (void)revokeBackgroundAuthorizationForBundleID:(id)arg1;
- (void)revokeBackgroundAuthorizationForSession:(id)arg1;

@end
