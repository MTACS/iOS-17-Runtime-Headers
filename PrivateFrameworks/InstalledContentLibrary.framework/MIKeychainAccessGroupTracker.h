
@interface MIKeychainAccessGroupTracker : NSObject {
    NSObject<OS_dispatch_queue> * _q;
    NSCountedSet * _refs;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic, retain) NSCountedSet *refs;

+ (id)sharedTracker;

- (void).cxx_destruct;
- (id)_keychainAccessGroupsForApp:(id)arg1 error:(id*)arg2;
- (id)_keychainAccessGroupsForBundle:(id)arg1 error:(id*)arg2;
- (bool)_onQueue_addReferencesForBundle:(id)arg1 error:(id*)arg2;
- (void)_onQueue_discoverReferences;
- (bool)_onQueue_removeReferencesForBundle:(id)arg1 error:(id*)arg2;
- (bool)_onQueue_updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id*)arg3;
- (bool)_removeGroupsWithError:(id)arg1 error:(id*)arg2;
- (bool)addReferencesForBundle:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)invalidateCache;
- (id)q;
- (void)reconcile;
- (id)refs;
- (bool)removeReferencesForBundle:(id)arg1 error:(id*)arg2;
- (void)setRefs:(id)arg1;
- (bool)updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id*)arg3;

@end
