
@interface CDPKeychainSync : NSObject

+ (bool)isUserVisibleKeychainSyncEnabled;
+ (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)setUserVisibleKeychainSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
+ (void)synchronizeKeychainSyncForContext:(id)arg1 withCompletion:(id /* block */)arg2;

@end
