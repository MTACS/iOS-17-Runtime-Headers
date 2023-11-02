
@interface CKSyncEngineSentRecordZoneChangesEvent : CKSyncEngineEvent {
    NSArray * _deletedRecordIDs;
    NSDictionary * _failedRecordDeletes;
    NSArray * _failedRecordSaves;
    NSArray * _savedRecords;
}

@property (nonatomic, readonly, copy) NSArray *deletedRecordIDs;
@property (nonatomic, readonly, copy) NSDictionary *failedRecordDeletes;
@property (nonatomic, readonly, copy) NSArray *failedRecordSaves;
@property (nonatomic, readonly, copy) NSArray *savedRecords;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)deletedRecordIDs;
- (id)failedRecordDeletes;
- (id)failedRecordSaves;
- (id)initWithSavedRecords:(id)arg1 failedRecordSaves:(id)arg2 deletedRecordIDs:(id)arg3 failedRecordDeletes:(id)arg4;
- (id)savedRecords;
- (long long)type;

@end
