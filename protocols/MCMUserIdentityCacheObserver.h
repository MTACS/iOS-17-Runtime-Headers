
@protocol MCMUserIdentityCacheObserver <NSObject>

@required

- (void)userIdentityCache:(MCMUserIdentityCache *)arg1 didAddUserIdentity:(MCMUserIdentity *)arg2;
- (void)userIdentityCache:(MCMUserIdentityCache *)arg1 didInvalidateUserIdentity:(MCMUserIdentity *)arg2;

@end
