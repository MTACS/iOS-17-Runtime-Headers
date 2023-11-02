
@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isBreadcrumbDisabled, nonatomic, readonly) bool breadcrumbDisabled;
@property (nonatomic, readonly) long long medusaDeviceSimulation;
@property (getter=isMedusaEnabled, nonatomic, readonly) bool medusaEnabled;

- (void)_bindAndRegisterDefaults;

@end
