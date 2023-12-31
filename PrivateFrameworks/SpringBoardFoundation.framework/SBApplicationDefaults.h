
@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSString *bundleIdentifierToForceHomeAffordanceInset;
@property (nonatomic, readonly) bool forcesMedusaAdoption;
@property (nonatomic, readonly) bool ignoresDeclaredNetworkUsage;
@property (nonatomic, readonly) bool laserForLaunchPPT;
@property (nonatomic, readonly) bool shouldAllowScreenshotsInLoginWindow;
@property (nonatomic, readonly) bool shouldAllowUseOfNonRecapPPT;
@property (nonatomic, readonly) bool shouldShowInternalApplications;
@property (nonatomic, readonly) bool shouldShowNonDefaultSystemApplications;

- (void)_bindAndRegisterDefaults;

@end
