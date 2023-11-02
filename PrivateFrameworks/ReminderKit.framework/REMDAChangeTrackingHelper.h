
@interface REMDAChangeTrackingHelper : NSObject {
    REMChangeSet * __debug_mockChangeSet;
    <REMDAAccountProviding> * _account;
    REMChangeToken * _cached_currentChangeToken;
    REMChangeTrackingState * _cached_currentTrackingState;
    NSMutableDictionary * _cached_insertedModelObjectResultsByModelClassName;
    REMObjectID * _cached_remAccountObjectID;
    NSMutableDictionary * _cached_updatedModelObjectResultsByModelClassName;
    REMChangeSet * _changeSet;
    REMChangeTracking * _changeTracking;
    NSString * _clientName;
    NSArray * _entityNames;
    REMStore * _remStore;
    REMChangeToken * _sinceToken;
    REMChangeToken * _upToToken;
}

@property (nonatomic, retain) REMChangeSet *_debug_mockChangeSet;
@property (nonatomic, readonly) <REMDAAccountProviding> *account;
@property (nonatomic, retain) REMChangeToken *cached_currentChangeToken;
@property (nonatomic, retain) REMChangeTrackingState *cached_currentTrackingState;
@property (nonatomic, retain) NSMutableDictionary *cached_insertedModelObjectResultsByModelClassName;
@property (nonatomic, retain) REMObjectID *cached_remAccountObjectID;
@property (nonatomic, retain) NSMutableDictionary *cached_updatedModelObjectResultsByModelClassName;
@property (nonatomic, retain) REMChangeSet *changeSet;
@property (nonatomic, retain) REMChangeTracking *changeTracking;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSArray *entityNames;
@property (nonatomic, retain) REMStore *remStore;
@property (nonatomic, retain) REMChangeToken *sinceToken;
@property (nonatomic, retain) REMChangeToken *upToToken;

+ (bool)shouldIgnoreChangeOfModelClassProperties:(Class)arg1 withChangeObject:(id)arg2;

- (void).cxx_destruct;
- (id)_cachedModeObjectResultsForModelClass:(Class)arg1 changeType:(long long)arg2;
- (long long)_changeTypeMaskFromChangeType:(long long)arg1;
- (id)_changedModelObjectsOfClass:(Class)arg1 ofChangeTypes:(long long)arg2 shouldOutputFetchedModels:(bool)arg3;
- (id)_debug_currentChangeTokenWithError:(id*)arg1;
- (id)_debug_mockChangeSet;
- (void)_debug_resetCaches;
- (void)_debug_setMockChangeSet:(id)arg1;
- (id)_fetchModelObjectOfClass:(Class)arg1 withObjectID:(id)arg2 includeConcealedObjects:(bool)arg3;
- (id)_fetchModelObjectsOfClass:(Class)arg1 withObjectIDs:(id)arg2;
- (void)_handleIsConcealedUpdatesInChange:(id)arg1 ofModelClass:(Class)arg2 forClientID:(id)arg3 concealedHandler:(id /* block */)arg4 unconcealedHandler:(id /* block */)arg5;
- (id)_rem_accountObjectID;
- (id)_rem_changeTracking:(id)arg1;
- (void)_setCachedModeObjectResults:(id)arg1 forModelClass:(Class)arg2 changeType:(long long)arg3;
- (id)account;
- (id)cached_currentChangeToken;
- (id)cached_currentTrackingState;
- (id)cached_insertedModelObjectResultsByModelClassName;
- (id)cached_remAccountObjectID;
- (id)cached_updatedModelObjectResultsByModelClassName;
- (id)changeSet;
- (id)changeTracking;
- (id)changedIdentifiersOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (id)changedModelObjectsOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (void)clearCachedModelObjectResultsForModelClass:(Class)arg1;
- (id)clientName;
- (bool)compareCurrentChangeTokenToLastConsumedWithResult:(long long*)arg1 error:(id*)arg2;
- (id)currentChangeTokenWithError:(id*)arg1;
- (id)entityNames;
- (id)fetchAndInitializeChangeTrackingStateIfNeeded;
- (id)fetchChangesSinceLastConsumed;
- (id)initWithREMDAAccount:(id)arg1 clientName:(id)arg2 withREMStore:(id)arg3;
- (id)initWithREMDAAccount:(id)arg1 clientName:(id)arg2 withREMStore:(id)arg3 entityNames:(id)arg4;
- (void)markChangesConsumed;
- (void)markChangesConsumed:(bool)arg1;
- (id)remStore;
- (void)setCached_currentChangeToken:(id)arg1;
- (void)setCached_currentTrackingState:(id)arg1;
- (void)setCached_insertedModelObjectResultsByModelClassName:(id)arg1;
- (void)setCached_remAccountObjectID:(id)arg1;
- (void)setCached_updatedModelObjectResultsByModelClassName:(id)arg1;
- (void)setChangeSet:(id)arg1;
- (void)setChangeTracking:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setRemStore:(id)arg1;
- (void)setSinceToken:(id)arg1;
- (void)setUpToToken:(id)arg1;
- (void)set_debug_mockChangeSet:(id)arg1;
- (id)sinceToken;
- (id)upToToken;

@end
