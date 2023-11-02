
@interface SBBacklightServicesPlatformProvider : NSObject <BLSHServicePlatformProvider> {
    SBBacklightPlatformProvider * _backlightPlatformProvider;
}

@property (nonatomic, readonly) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (nonatomic, readonly) <BLSHBacklightPlatformProvider> *backlightPlatformProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBBacklightSignificantUserInteractionMonitor *significantUserInteractionMonitor;
@property (readonly) Class superclass;
@property (nonatomic) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (id)alwaysOnPolicyCoordinator;
- (id)backlightPlatformProvider;
- (void)completeInitializationAfterBLSStartup;
- (id)init;
- (id)initWithBacklightEnvironmentSessionProvider:(id)arg1;
- (void)setSignificantUserInteractionMonitor:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)significantUserInteractionMonitor;
- (id)windowScene;

@end
