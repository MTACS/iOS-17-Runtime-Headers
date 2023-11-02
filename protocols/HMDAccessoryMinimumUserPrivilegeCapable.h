
@protocol HMDAccessoryMinimumUserPrivilegeCapable <NSObject>

@required

- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedPassword:(NSString *)arg1;
- (bool)supportsMinimumUserPrivilege;

@end
