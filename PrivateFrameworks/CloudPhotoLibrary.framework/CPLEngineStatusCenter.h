
@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long  _currentGeneration;
    NSMutableSet * _pendingDeletedTransientStatuses;
    NSMutableDictionary * _pendingTransientStatuses;
    NSMutableSet * _persistedScopedIdentifiers;
    NSDate * _transactionStartDate;
    NSMutableDictionary * _transientStatuses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStatusChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2;
- (void)_fillStatus:(id)arg1;
- (void)_fillStatus:(id)arg1 withClientCacheRecordView:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(bool)arg4 isStaged:(bool)arg5 isInIDMapping:(bool)arg6;
- (void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2;
- (void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2;
- (id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1;
- (bool)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2;
- (id)allStatusChanges;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasStatusChanges;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)notifyStatusForRecordHasChanged:(id)arg1 persist:(bool)arg2 error:(id*)arg3;
- (bool)notifyStatusForRecordViewHasChanged:(id)arg1 persist:(bool)arg2 error:(id*)arg3;
- (bool)notifyStatusForRecordWithScopedIdentifierHasChanged:(id)arg1 recordClass:(Class)arg2 persist:(bool)arg3 error:(id*)arg4;
- (id)recordForStatusWithScopedIdentifier:(id)arg1;
- (id)recordViewForStatusWithScopedIdentifier:(id)arg1;
- (void)resetAllTransientStatuses;
- (void)resetTransientStatusesWithScopeIdentifier:(id)arg1;
- (unsigned long long)scopeType;
- (id)status;
- (id)statusChanges;
- (id)statusesForRecordsWithIdentifiers:(id)arg1;
- (id)statusesForRecordsWithScopedIdentifiers:(id)arg1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
