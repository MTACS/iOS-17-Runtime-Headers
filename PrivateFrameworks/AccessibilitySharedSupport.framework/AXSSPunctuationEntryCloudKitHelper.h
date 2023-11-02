
@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer * _changeCoalescer;
}

- (void).cxx_destruct;
- (void)_processPunctuationEntryFromCKRecord:(id)arg1;
- (id)apsEnvironment;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)arg1;
- (id)createCKRecordFromEntry:(id)arg1;
- (id)createCKRecordFromObject:(id)arg1;
- (void)dealloc;
- (Class)managedObjectClass;
- (void)processRecordDeletionsFromServer:(id)arg1;
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;
- (void)punctuationGroupChanged:(id)arg1;
- (id)recordType;
- (void)retrieveLocalChangesForCloud:(id /* block */)arg1;
- (id)testRecordForSchemaCreation:(id)arg1;

@end
