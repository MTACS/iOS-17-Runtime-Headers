
@protocol RecordStoreDeleting

@required

- (NSDictionary *)batchOfRecordIDsToDeleteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)clearTombstonesForRecordIDs:(NSArray *)arg1;

@end
