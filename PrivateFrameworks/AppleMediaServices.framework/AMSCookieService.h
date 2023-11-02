
@interface AMSCookieService : NSObject <AMSCookieServiceInterface, NSCacheDelegate> {
    NSCache * _inMemoryStorage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inMemoryStorageLock;
    bool  _isObservingNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSCache *inMemoryStorage;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } inMemoryStorageLock;
@property bool isObservingNotifications;
@property (readonly) Class superclass;

+ (bool)_isEntitledForDirectCookieAccess;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)_cacheCookies:(id)arg1 forAccount:(id)arg2;
- (id)_cachedCookiesForAccount:(id)arg1;
- (void)_registerForCookieChangeNotifications;
- (void)_unregisterFromCookieChangeNotifications;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)clearCookieCache;
- (void)clearCookieCacheForAccount:(id)arg1;
- (void)getCookieDatabasePathForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)getCookiesForAccount:(id)arg1 cookieDatabaseOnly:(bool)arg2 error:(id*)arg3;
- (void)getCookiesForAccount:(id)arg1 cookieDatabaseOnly:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)getCookiesForAccount:(id)arg1 error:(id*)arg2;
- (void)getCookiesForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)inMemoryStorage;
- (struct os_unfair_lock_s { unsigned int x1; })inMemoryStorageLock;
- (id)init;
- (bool)isObservingNotifications;
- (void)setIsObservingNotifications:(bool)arg1;
- (void)updateCookiesWithCookiesToAdd:(id)arg1 cookiesToRemove:(id)arg2 forAccount:(id)arg3 withCompletion:(id /* block */)arg4;

@end
