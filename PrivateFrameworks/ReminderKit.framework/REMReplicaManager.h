
@interface REMReplicaManager : NSObject {
    unsigned long long  _currentVersion;
    bool  _exceededMaxSerializedSize;
    bool  _isPersistable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    unsigned long long  _maxLastSavedVersion;
    NSMutableDictionary * _replicaEntries;
    NSMutableOrderedSet * _replicaUUIDs;
}

@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) bool exceededMaxSerializedSize;
@property (nonatomic) bool isPersistable;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } ivarLock;
@property (nonatomic) unsigned long long maxLastSavedVersion;
@property (nonatomic, retain) NSMutableDictionary *replicaEntries;
@property (nonatomic, retain) NSMutableOrderedSet *replicaUUIDs;

+ (bool)disablesInMemoryOnlyCheck;
+ (id)replicaManagerForAccountID:(id)arg1 store:(id)arg2;
+ (id)replicaManagerIfLoadedForAccountID:(id)arg1;
+ (id)replicaManagerWithSerializedData:(id)arg1 error:(id*)arg2;
+ (void)setDisablesInMemoryOnlyCheck:(bool)arg1;
+ (void)setReplicaManager:(id)arg1 forAccountID:(id)arg2;
+ (bool)shouldUseNewInMemoryOnlyReplicaManager;
+ (bool)supportsSecureCoding;
+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;

- (void).cxx_destruct;
- (void)addRandomReplicaEntriesWithCount:(long long)arg1;
- (id)availabilityOfFirstReplicaForCRDTID:(id)arg1;
- (id)checkoutReplicaUUIDForClient:(id)arg1;
- (id)clockOfFirstReplicaForCRDTID:(id)arg1;
- (void)commonInit;
- (unsigned long long)currentVersion;
- (id)description;
- (void)didSaveVersion:(unsigned long long)arg1;
- (void)encodeIntoArchive:(void*)arg1;
- (bool)exceededMaxSerializedSize;
- (bool)hasEqualPersistedEntriesAs:(id)arg1;
- (bool)hasUnsavedChanges;
- (id)init;
- (id)initWithArchive:(const void*)arg1 error:(id*)arg2;
- (bool)isPersistable;
- (struct os_unfair_lock_s { unsigned int x1; })ivarLock;
- (id)l_checkoutReplicaUUIDForClient:(id)arg1;
- (id)l_replicaEntriesDescriptionForPersistence:(bool)arg1;
- (id)l_replicaUUIDsDescription;
- (id)l_serializedDataWithError:(id*)arg1;
- (bool)l_updateVersionOfEntry:(id)arg1 forClient:(id)arg2;
- (unsigned long long)maxLastSavedVersion;
- (void)modifyReplicaEntryForClient:(id)arg1 block:(id /* block */)arg2;
- (void)performLocked:(id /* block */)arg1;
- (id)persistenceDescription;
- (id)replicaEntries;
- (unsigned long long)replicaEntryCount;
- (id)replicaUUIDs;
- (void)returnReplicaForClient:(id)arg1;
- (id)serializedDataCappedAtMaxSize:(bool)arg1 error:(id*)arg2;
- (void)setCurrentVersion:(unsigned long long)arg1;
- (void)setExceededMaxSerializedSize:(bool)arg1;
- (void)setIsPersistable:(bool)arg1;
- (void)setIvarLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMaxLastSavedVersion:(unsigned long long)arg1;
- (void)setReplicaEntries:(id)arg1;
- (void)setReplicaUUIDs:(id)arg1;
- (void)updateVersionForClient:(id)arg1;

@end
