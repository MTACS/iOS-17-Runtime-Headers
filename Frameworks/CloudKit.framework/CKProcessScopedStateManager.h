
@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient> {
    CKEntitlements * _baseEntitlements;
    NSHashTable * _containersRegisteredForAccountChangeNotifications;
    NSMutableDictionary * _fakeEntitlements;
    bool  _hasDeferredAccountChangeNotice;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    CKEntitlements * _resolvedEntitlements;
    bool  _systemIsAvailable;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)clearFakeEntitlementForKey:(id)arg1;
- (void)connectionBecameInvalid:(id)arg1;
- (void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2;
- (void)noteSystemIsAvailable;
- (void)setFakeEntitlement:(id)arg1 forKey:(id)arg2;
- (id)untrustedEntitlements;

@end
