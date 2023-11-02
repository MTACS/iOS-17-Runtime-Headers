
@protocol DSPrivacyPermissionsDelegate <NSObject>

@required

- (void)returnFromDetailAndDeleteApp:(DSApp *)arg1;
- (void)returnFromDetailAndResetPermissionForSelectedApps:(NSArray *)arg1 permission:(DSSensor *)arg2;
- (void)returnFromDetailAndResetSelectedPermissions:(NSArray *)arg1 forApp:(DSApp *)arg2;
- (void)returnFromDetailAndStopAllSharingForPermission:(DSSensor *)arg1;

@end
