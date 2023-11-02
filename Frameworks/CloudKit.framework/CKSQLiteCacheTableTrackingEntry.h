
@interface CKSQLiteCacheTableTrackingEntry : CKSQLiteTableEntry {
    NSNumber * _dataSize;
    NSNumber * _entryCount;
    NSDate * _oldestExpireDate;
    NSString * _tableName;
}

@property (nonatomic, retain) NSNumber *dataSize;
@property (nonatomic, retain) NSNumber *entryCount;
@property (nonatomic, retain) NSDate *oldestExpireDate;
@property (nonatomic, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)dataSize;
- (id)entryCount;
- (id)oldestExpireDate;
- (void)setDataSize:(id)arg1;
- (void)setEntryCount:(id)arg1;
- (void)setOldestExpireDate:(id)arg1;
- (void)setTableName:(id)arg1;
- (id)tableName;

@end
