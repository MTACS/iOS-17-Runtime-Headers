
@interface APLocalEnforcementManager : APEnforcementManager

- (id)accountStorefront;
- (bool)adServicesEnabled:(id /* block */)arg1;
- (id)appTrackingServiceProxy:(id)arg1;
- (id)appTrackingXPCConnection:(id /* block */)arg1 withInvalidation:(id /* block */)arg2;
- (bool)deviceRegionStorefrontEnabled;
- (id)disabledReasons;
- (bool)isU13MAIDEDU;
- (bool)loggingEnabled;
- (bool)shouldShowTCCWithAds;

@end
