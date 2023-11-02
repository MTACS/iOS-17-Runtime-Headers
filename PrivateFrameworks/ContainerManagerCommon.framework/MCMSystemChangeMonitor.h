
@interface MCMSystemChangeMonitor : NSObject <MCMUserIdentityCacheObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;

@end
