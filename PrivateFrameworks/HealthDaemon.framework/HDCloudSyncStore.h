
@interface HDCloudSyncStore : NSObject <HDSyncStore, NSCopying> {
    bool  _canPush;
    NSString * _containerIdentifier;
    NSString * _ownerIdentifier;
    HDProfile * _profile;
    HDCloudSyncShardPredicate * _shardPredicate;
    NSString * _sharingIdentifier;
    HDSharingPredicate * _sharingPredicate;
    NSUUID * _storeIdentifier;
    long long  _syncEpoch;
    HDSyncIdentity * _syncIdentity;
    int  _syncProtocolVersion;
    long long  _syncProvenance;
    bool  _syncTombstonesOnly;
}

@property (nonatomic, readonly) bool canPush;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) int protocolVersion;
@property (nonatomic, readonly, copy) HDCloudSyncShardPredicate *shardPredicate;
@property (nonatomic, readonly, copy) NSString *sharingIdentifier;
@property (nonatomic, readonly) HDSharingPredicate *sharingPredicate;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRebase;
@property (nonatomic, readonly, copy) HDSyncIdentity *syncIdentity;
@property (readonly) long long syncStoreType;
@property (nonatomic, readonly) bool syncTombstonesOnly;

+ (id)createOrUpdateShardStoresForProfile:(id)arg1 throughDate:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 syncIdentity:(id)arg6 error:(id*)arg7;
+ (void)samplesDeletedInProfile:(id)arg1 byUser:(bool)arg2 intervals:(id)arg3;
+ (id)shardPredicatesForProfile:(id)arg1 syncCircleName:(id)arg2 currentDate:(id)arg3 error:(id*)arg4;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 syncIdentity:(id)arg5 containerIdentifier:(id)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (id)_syncAnchorMapByStrippingBlockedEntities:(id)arg1;
- (bool)canPush;
- (bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (bool)clearAllSyncAnchorsWithError:(id*)arg1;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseIdentifier;
- (id)description;
- (bool)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (id)getPersistedAnchorMapWithError:(id*)arg1;
- (id)orderedSyncEntities;
- (id)ownerIdentifier;
- (bool)persistState:(id)arg1 error:(id*)arg2;
- (id)persistedStateWithError:(id*)arg1;
- (id)primaryOrderedSyncEntities;
- (id)profile;
- (int)protocolVersion;
- (id)receivedSyncAnchorMapWithError:(id*)arg1;
- (bool)replaceFrozenAnchorMap:(id)arg1 updateDate:(id)arg2 error:(id*)arg3;
- (bool)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2;
- (bool)resetReceivedSyncAnchorMapWithError:(id*)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (id)shardPredicate;
- (id)sharingIdentifier;
- (id)sharingPredicate;
- (bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (bool)shouldEnforceSequenceOrdering;
- (id)storeIdentifier;
- (bool)supportsRebase;
- (bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (id)syncIdentity;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreForEpoch:(long long)arg1;
- (id)syncStoreForProtocolVersion:(int)arg1;
- (id)syncStoreForTombstoneSyncOnly:(bool)arg1;
- (id)syncStoreIdentifier;
- (long long)syncStoreType;
- (bool)syncTombstonesOnly;

@end
