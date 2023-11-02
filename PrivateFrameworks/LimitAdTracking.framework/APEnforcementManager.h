
@interface APEnforcementManager : NSObject

- (bool)adServicesEnabled:(id /* block */)arg1;
- (id)disabledReasons;
- (bool)loggingEnabled;
- (bool)shouldShowTCCWithAds;

@end
