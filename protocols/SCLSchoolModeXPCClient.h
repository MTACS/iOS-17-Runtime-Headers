
@protocol SCLSchoolModeXPCClient <NSObject>

@required

- (oneway void)applyServerSettings:(SCLSchoolModeServerSettings *)arg1;
- (oneway void)didChangeUnlockHistory;

@end
