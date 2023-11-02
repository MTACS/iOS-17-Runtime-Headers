
@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord <NSCopying> {
    NSUUID * _storeIdentifier;
    HDCloudSyncCodableSequence * _underlyingSequence;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) long long baselineEpoch;
@property (nonatomic, readonly) long long changeIndex;
@property (nonatomic, readonly) long long childRecordCount;
@property (nonatomic, copy) CKRecordID *firstUnfrozenChangeRecord;
@property (nonatomic, readonly) HDSyncAnchorMap *frozenSyncAnchorMap;
@property (nonatomic, copy) NSSet *includedChildSyncIdentities;
@property (nonatomic, readonly, copy) NSSet *includedIdentifiers;
@property (nonatomic, readonly, copy) NSSet *includedSyncIdentities;
@property (nonatomic) int protocolVersion;
@property (nonatomic, readonly) int slot;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (nonatomic, readonly) HDSyncAnchorMap *syncAnchorMap;

+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isSequenceRecord:(id)arg1;
+ (id)recordIDsForOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 zoneID:(id)arg3;
+ (id)recordIDsWithIndividualZoneID:(id)arg1;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)requiresUnderlyingMessage;

- (void).cxx_destruct;
- (void)_unitTest_setChildRecordCount:(unsigned long long)arg1;
- (long long)baselineEpoch;
- (long long)changeIndex;
- (long long)childRecordCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decrementChildRecordCount:(unsigned long long)arg1;
- (id)description;
- (id)firstUnfrozenChangeRecord;
- (id)frozenSyncAnchorMap;
- (unsigned long long)hash;
- (id)includedChildSyncIdentities;
- (id)includedIdentifiers;
- (id)includedSyncIdentities;
- (void)incrementChangeIndex;
- (void)incrementChildRecordCount;
- (id)initForSequenceSlot:(int)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(long long)arg4 includedIdentifiers:(id)arg5 includedSyncIdentities:(id)arg6 includedChildSyncIdentities:(id)arg7 storeRecord:(id)arg8;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)printDescription;
- (int)protocolVersion;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)resetChangeIndex:(unsigned long long)arg1;
- (id)serializeUnderlyingMessage;
- (void)setActive:(bool)arg1;
- (void)setFirstUnfrozenChangeRecord:(id)arg1;
- (void)setIncludedChildSyncIdentities:(id)arg1;
- (void)setProtocolVersion:(int)arg1;
- (int)slot;
- (id)storeIdentifier;
- (id)syncAnchorMap;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1;

@end
