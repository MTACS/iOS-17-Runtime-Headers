
@interface INBundleAccessGrant : NSObject {
    long long  _acquireCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _securityScopedURLs;
}

@property (nonatomic, readonly) NSSet *bundleIdentifiers;
@property (nonatomic, readonly) NSDictionary *securityScopedURLs;

- (void).cxx_destruct;
- (void)acquire;
- (id)bundleIdentifiers;
- (void)dealloc;
- (id)initWithSecurityScopedURLs:(id)arg1;
- (void)relinquish;
- (id)securityScopedURLs;

@end
