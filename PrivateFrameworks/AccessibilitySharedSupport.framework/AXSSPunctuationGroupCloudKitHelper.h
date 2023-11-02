
@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer * _changeCoalescer;
}

- (void).cxx_destruct;
- (id)apsEnvironment;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)arg1;
- (id)createCKRecordFromGroup:(id)arg1;
- (id)createCKRecordFromObject:(id)arg1;
- (void)dealloc;
- (Class)managedObjectClass;
- (void)processRecordDeletionsFromServer:(id)arg1;
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;
- (void)punctuationGroupsChanged:(id)arg1;
- (id)recordType;
- (void)retrieveLocalChangesForCloud:(id /* block */)arg1;
- (id)testRecordForSchemaCreation:(id)arg1;

@end
