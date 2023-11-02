
@interface NSXPCStoreConnectionInfo : NSObject {
    NSXPCStoreServerPerConnectionCache * _cache;
    NSDictionary * _entitlements;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct { 
        unsigned int val[8]; 
    }  _token;
    id  _userInfo;
}

- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)description;
- (id)entitlements;
- (id)initForToken:(struct { unsigned int x1[8]; })arg1 entitlementNames:(id)arg2 cache:(id)arg3;
- (id)persistentStoreCoordinator;
- (id)userInfo;

@end
