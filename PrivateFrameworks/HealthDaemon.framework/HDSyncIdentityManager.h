
@interface HDSyncIdentityManager : NSObject <HDProfileInitializedObserver> {
    HDConcreteSyncIdentity * _currentSyncIdentity;
    HDDatabaseValueCache * _entityByIdentityCache;
    HDDatabaseValueCache * _identityByEntityPersistentIDCache;
    HDConcreteSyncIdentity * _legacySyncIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
}

@property (nonatomic, readonly, copy) HDConcreteSyncIdentity *currentSyncIdentity;
@property (nonatomic, readonly, copy) HDConcreteSyncIdentity *legacySyncIdentity;
@property (nonatomic, readonly) HDProfile *profile;

+ (void)unitTest_resetCachedHardwareIdentifier;

- (void).cxx_destruct;
- (id)childIdentitiesForCurrentSyncIdentityWithError:(id*)arg1;
- (id)childIdentitiesForCurrentSyncIdentityWithTransaction:(id)arg1 error:(id*)arg2;
- (id)concreteIdentityForIdentity:(id)arg1 shouldCreate:(bool)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)currentSyncIdentity;
- (id)description;
- (bool)enumerateConcreteIdentitiesError:(id*)arg1 enumerationHandler:(id /* block */)arg2;
- (id)identityForEntityID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (id)legacySyncIdentity;
- (id)profile;
- (void)profileDidInitialize:(id)arg1;
- (bool)rollCurrentSyncIdentityWithReason:(id)arg1 error:(id*)arg2;
- (bool)updateIsChild:(bool)arg1 concreteIdentity:(id)arg2 error:(id*)arg3;

@end
