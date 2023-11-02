
@interface LSDatabaseContext : NSObject

@property (getter=isAccessing, readonly) bool accessing;
@property (readonly) bool canAccess;
@property (readonly) NSData *currentPersistentIdentifier;

+ (id)new;
+ (id)sharedDatabaseContext;

- (id)_init;
- (void)accessCurrentUserSessionUsingBlock:(id /* block */)arg1;
- (void)accessSystemScopeUsingBlock:(id /* block */)arg1;
- (void)accessUsingBlock:(id /* block */)arg1;
- (void)accessWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)accessWithUserID:(unsigned int)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)accessWithUserID:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (id)addDatabaseChangeObserver4WebKit:(id /* block */)arg1;
- (bool)canAccess;
- (id)currentPersistentIdentifier;
- (void)getSystemContentDatabaseObject4WebKit:(id /* block */)arg1;
- (id)init;
- (bool)isAccessing;
- (void)observeDatabaseChange4WebKit:(id)arg1;
- (void)releaseObservedDatabase4WebKit;
- (void)removeDatabaseChangeObserver4WebKit:(id)arg1;
- (bool)startAccessingCurrentUserSessionReturningError:(id*)arg1;
- (bool)startAccessingReturningError:(id*)arg1;
- (bool)startAccessingSystemScopeReturningError:(id*)arg1;
- (bool)startAccessingWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)startAccessingWithUserID:(unsigned int)arg1 error:(id*)arg2;
- (bool)startAccessingWithUserID:(unsigned int)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)stopAccessing;

@end
