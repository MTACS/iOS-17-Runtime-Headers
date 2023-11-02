
@interface MCMContainerClassPathCache : NSObject <MCMUserIdentityCacheObserver> {
    NSMutableDictionary * _lookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lookupLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;
- (void)_lock_flush;
- (id)containerClassPathForContainerIdentity:(id)arg1 typeClass:(Class)arg2;
- (id)containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;
- (id)containerClassPathWithURL:(id)arg1 reference:(id)arg2;
- (void)flush;
- (id)init;
- (id)referenceForPOSIXUser:(id)arg1;
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;

@end
