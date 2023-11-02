
@protocol CDPDKeychainSyncPolicyProvider <NSObject>

@required

- (bool)keychainSyncAllowedByMDM;
- (bool)keychainSyncAllowedByServer;
- (void)setUserHasExplicitlyDisabledSync:(bool)arg1;
- (bool)userHasExplicitlyDisabledSync;

@end
