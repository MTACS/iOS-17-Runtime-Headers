
@interface SCWZoneModificationSilo : NSObject <SCWZoneModifying> {
    NSMutableArray * _deletedRecordIDs;
    NSMutableDictionary * _originalRecordsByID;
    NSMutableDictionary * _recordsToSaveByID;
    NSMutableDictionary * _workingRecordsByID;
    SCWZoneSchema * _zoneSchema;
}

@property (nonatomic, retain) NSMutableArray *deletedRecordIDs;
@property (nonatomic, readonly, copy) SCWZoneDiff *diff;
@property (nonatomic, retain) NSMutableDictionary *originalRecordsByID;
@property (nonatomic, retain) NSMutableDictionary *recordsToSaveByID;
@property (nonatomic, retain) NSMutableDictionary *workingRecordsByID;
@property (nonatomic, retain) SCWZoneSchema *zoneSchema;

- (void).cxx_destruct;
- (bool)_shouldAssertRecordValidity;
- (void)createOrUpdateRecordWithName:(id)arg1 recordType:(id)arg2 modifyBlock:(id /* block */)arg3;
- (void)deleteRecordWithName:(id)arg1;
- (id)deletedRecordIDs;
- (id)diff;
- (id)initWithZoneSchema:(id)arg1 contents:(id)arg2;
- (id)originalRecordsByID;
- (bool)recordExistsWithName:(id)arg1;
- (id)recordsToSaveByID;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setOriginalRecordsByID:(id)arg1;
- (void)setRecordsToSaveByID:(id)arg1;
- (void)setWorkingRecordsByID:(id)arg1;
- (void)setZoneSchema:(id)arg1;
- (id)workingRecordsByID;
- (id)zoneSchema;

@end
