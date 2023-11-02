
@interface SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider : NSObject <SBTraitsOrientationPolicySpecifierDataSource, TRAArbiterStagesRolesProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)ambientPresentationStageRoles;
- (id)defaultActiveOrientationBelowDrivenRoles;
- (id)defaultDeviceOrientationDrivenRoles;
- (id)defaultIsolationDrivenRoles;
- (id)defaultKeyboardFocusDrivenRoles;
- (id)defaultOtherParticipantDrivenRoles;
- (id)orientationStageRoles;
- (id)userInterfaceStyleStageRoles;
- (id)zOrderStageRoles;

@end
