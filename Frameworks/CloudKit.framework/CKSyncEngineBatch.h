
@interface CKSyncEngineBatch : NSObject {
    bool  _atomic;
    bool  _customBatch;
    NSArray * _deletedRecordIDs;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    NSArray * _savedRecords;
}

@property (getter=isAtomic) bool atomic;
@property (getter=isCustomBatch) bool customBatch;
@property (copy) NSArray *deletedRecordIDs;
@property (readonly, copy) NSArray *recordIDsToDelete;
@property (readonly, copy) NSArray *recordsToSave;
@property (copy) NSArray *savedRecords;

+ (void)initialize;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)deletedRecordIDs;
- (id)description;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (bool)isAtomic;
- (bool)isCustomBatch;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (id)savedRecords;
- (void)setAtomic:(bool)arg1;
- (void)setCustomBatch:(bool)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setSavedRecords:(id)arg1;

@end
