
@protocol PHAActivityGovernorDelegate <NSObject>

@required

- (void)governorDidGrantBackgroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidRevokeBackgroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidRevokeForegroundAccess:(PHAActivityGovernor *)arg1;

@end
