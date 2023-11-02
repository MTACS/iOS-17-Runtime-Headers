
@protocol MCMUserIdentityCache <NSObject>

@required

- (MCMUserIdentity *)defaultUserIdentity;
- (MCMUserIdentity *)globalBundleUserIdentity;
- (MCMUserIdentity *)globalSystemUserIdentity;
- (MCMUserIdentity *)userIdentityForPersonaUniqueString:(NSString *)arg1 POSIXUser:(MCMPOSIXUser *)arg2;
- (MCMUserIdentity *)userIdentityForPersonalPersonaWithPOSIXUser:(MCMPOSIXUser *)arg1;

@end
