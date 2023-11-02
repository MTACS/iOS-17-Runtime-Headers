
@interface REMNSPersistentHistoryChange : REMChangeObject {
    REMObjectID * _cachedChangedREMObjectID;
    NSArray * _coalescedChanges;
    REMChangeTransaction * _internal_ChangeTransaction;
    bool  _isCoalesced;
    NSPersistentHistoryChange * _persistentHistoryChange;
    _REMNSPersistentHistoryChangeStorage * _storage;
}

@property (retain) REMObjectID *cachedChangedREMObjectID;
@property (nonatomic, retain) NSArray *coalescedChanges;
@property (nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) bool isCoalesced;
@property (readonly) NSPersistentHistoryChange *persistentHistoryChange;
@property (retain) _REMNSPersistentHistoryChangeStorage *storage;

+ (id)shortStringForChangeType:(long long)arg1;
+ (id)stringForChangeType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedChangedREMObjectID;
- (long long)changeID;
- (long long)changeType;
- (id)changedManagedObjectID;
- (id)changedObjectID;
- (id)coalescedChanges;
- (id)copyForCoalescing;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryChange:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)internal_ChangeTransaction;
- (bool)isCoalesced;
- (bool)isEqual:(id)arg1;
- (id)persistentHistoryChange;
- (void)resolveObjectIDWithUUID:(id)arg1 entityName:(id)arg2;
- (void)setCachedChangedREMObjectID:(id)arg1;
- (void)setCoalescedChanges:(id)arg1;
- (void)setInternal_ChangeTransaction:(id)arg1;
- (void)setIsCoalesced:(bool)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;

@end
