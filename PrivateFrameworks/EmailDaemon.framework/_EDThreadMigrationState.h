
@interface _EDThreadMigrationState : NSObject {
    unsigned long long  _generation;
    NSCountedSet * _objectIDsToMigrate;
    NSCountedSet * _recentlyDeletedObjectIDs;
    NSCountedSet * _recentlyMigratedObjectIDs;
    unsigned long long  _state;
}

@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isFullyMigrated;
@property (nonatomic, readonly) bool isInProgress;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long unmigratedCount;

- (void).cxx_destruct;
- (void)_removeAllObjectIDs;
- (bool)_verifyIsMigratingGeneration:(unsigned long long)arg1 stateVerifier:(id /* block */)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(unsigned long long)arg5;
- (void)addDeletedObjectIDs:(id)arg1;
- (void)addObjectIDs:(id)arg1;
- (void)cancel;
- (void)fail;
- (unsigned long long)generation;
- (id)init;
- (bool)isEmpty;
- (bool)isFullyMigrated;
- (bool)isInProgress;
- (bool)isRecentlyMigrated:(id)arg1;
- (id)nextBatch;
- (void)removeDeletedObjectIDs:(id)arg1;
- (void)removeMigratedObjectIDs:(id)arg1;
- (void)removeObjectIDs:(id)arg1;
- (void)reset;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)unmigratedCount;
- (bool)verifyIsMigratingGeneration:(unsigned long long)arg1 andIsInState:(unsigned long long)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(unsigned long long)arg5;
- (bool)verifyIsMigratingGeneration:(unsigned long long)arg1 andIsInState:(unsigned long long)arg2 orState:(unsigned long long)arg3 logIdentifier:(id)arg4 logAction:(id)arg5 logCount:(unsigned long long)arg6;

@end
