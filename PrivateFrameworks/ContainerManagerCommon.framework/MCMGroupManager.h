
@interface MCMGroupManager : NSObject {
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_cleanupUnreferencedGroupContainersForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 referenceCounts:(id)arg3 context:(id)arg4;
- (id)groupContainerIdentifiersForOwnerIdentifier:(id)arg1 groupContainerClass:(unsigned long long)arg2 codeSignInfo:(id)arg3 withError:(id*)arg4;
- (id)initWithUserIdentityCache:(id)arg1;
- (void)reconcileGroupContainersForContainerClass:(unsigned long long)arg1 context:(id)arg2;
- (id)userIdentityCache;

@end
