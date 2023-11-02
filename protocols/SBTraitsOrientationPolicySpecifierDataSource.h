
@protocol SBTraitsOrientationPolicySpecifierDataSource <NSObject>

@required

- (NSArray *)defaultActiveOrientationBelowDrivenRoles;
- (NSArray *)defaultDeviceOrientationDrivenRoles;
- (NSArray *)defaultIsolationDrivenRoles;
- (NSArray *)defaultKeyboardFocusDrivenRoles;
- (NSDictionary *)defaultOtherParticipantDrivenRoles;

@end
