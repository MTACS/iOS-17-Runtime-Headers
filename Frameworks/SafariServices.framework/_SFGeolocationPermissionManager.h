
@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {
    CLLocationManager * _locationManager;
    UIWebGeolocationPolicyDecider * _policyDecider;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasPreciseLocationPermission;
- (void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(id /* block */)arg4;

@end
