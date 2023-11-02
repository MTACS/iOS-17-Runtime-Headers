
@interface PPRecordStorageHelper : NSObject {
    NSString * _clusterIdentifierColumn;
    PPDKStorage * _duetStorage;
    _DKEventStream * _duetStream;
    NSString * _feedbackTable;
    NSString * _lastDuetDeletionDateKey;
    NSString * _lastDuetImportDateKey;
    unsigned int  _maxRecords;
    PPSourceStorage * _sourceStorage;
    NSString * _table;
}

- (void).cxx_destruct;
- (id)blobFromUUID:(id)arg1;
- (bool)clearWithDatabase:(id)arg1 client:(unsigned char)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 clearExternalTableReferences:(id /* block */)arg5;
- (id)clusterIdentifiersExistingInDatabaseBeforeDate:(id)arg1 client:(unsigned char)arg2 date:(id)arg3;
- (bool)decayFeedbackWithDatabase:(id)arg1 client:(unsigned char)arg2 decayRate:(double)arg3;
- (id)decayedFeedbackCountsForItemString:(id)arg1 database:(id)arg2 client:(unsigned char)arg3;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned int)arg4 txnWitness:(id)arg5 atLeastOneRecordClusterRemoved:(bool*)arg6 deletedCount:(unsigned long long*)arg7 error:(id*)arg8;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllRecordsWithClusterIdentifier:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsWithClusterIdentifier:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllRecordsWithName:(id)arg1 algorithm:(unsigned int)arg2 bundleId:(id)arg3 groupId:(id)arg4 category:(unsigned int)arg5 beforeDate:(id)arg6 txnWitness:(id)arg7 atLeastOneRecordClusterRemoved:(bool*)arg8 deletedCount:(unsigned long long*)arg9 error:(id*)arg10;
- (void)deleteAllRemoteRecordsMissingInDuetFromDatabase:(id)arg1 client:(unsigned char)arg2 shouldContinueBlock:(id /* block */)arg3;
- (bool)deleteFeedbackCountRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2;
- (void)deleteRecordsForRowIds:(id)arg1 txnWitness:(id)arg2 atLeastOneClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4;
- (void)disableSyncForBundleIds:(id)arg1 txnWitness:(id)arg2;
- (unsigned int)distinctClusterCountInDatabase:(id)arg1 client:(unsigned char)arg2;
- (id /* block */)duetEventDeletionProcessingBlockWithDatabase:(id)arg1 client:(unsigned char)arg2;
- (id)firstDonationSourceCountsForDatabase:(id)arg1 client:(unsigned char)arg2 shouldContinueBlock:(id /* block */)arg3;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)arg1 database:(id)arg2 client:(unsigned char)arg3;
- (bool)fixupDKEventsWithDatabase:(id)arg1 fixup49995922Table:(id)arg2 batchSize:(unsigned int)arg3 shouldContinueBlock:(id /* block */)arg4 createRecordWithStatement:(id /* block */)arg5 eventForRecord:(id /* block */)arg6;
- (void)importDuetEventsWithLimit:(unsigned int)arg1 database:(id)arg2 client:(unsigned char)arg3 remoteEventsOnly:(bool)arg4 isComplete:(bool*)arg5 shouldContinueBlock:(id /* block */)arg6 eventImportBlock:(id /* block */)arg7;
- (id)init;
- (id)initWithName:(id)arg1 table:(id)arg2 clusterIdentifierColumn:(id)arg3 maxRecords:(unsigned int)arg4 duetStorage:(id)arg5 duetStream:(id)arg6 sourceStorage:(id)arg7;
- (id)lastDonationTimeForSourcesInDatabase:(id)arg1 client:(unsigned char)arg2 before:(id)arg3;
- (bool)pruneOrphanedFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 txnWitness:(id)arg4 isComplete:(bool*)arg5;
- (id)rowIdsForRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)arg1 exactMatchGroupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2;
- (id)rowIdsForRecordsToDropMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (bool)storeFeedback:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lowercaseItemStrings:(bool)arg4 limit:(unsigned int)arg5;
- (id)thirdPartyBundleIdsFromTodayInDatabase:(id)arg1 client:(unsigned char)arg2;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)uuidForStatement:(id)arg1 columnName:(const char *)arg2 tableName:(const char *)arg3;

@end
