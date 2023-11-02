
@interface SCKZoneDiff : NSObject <NSCopying> {
    NSArray * _deletedRecordIDs;
    NSArray * _modifiedRecords;
}

@property (nonatomic, readonly, copy) NSArray *deletedRecordIDs;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSArray *modifiedRecords;

- (void).cxx_destruct;
- (void)applyToModifyRecordsOperation:(id)arg1;
- (id)applyToRecords:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedRecordIDs;
- (bool)hasSameBaseAsDiff:(id)arg1;
- (id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)isEmpty;
- (id)modifiedRecords;

@end
