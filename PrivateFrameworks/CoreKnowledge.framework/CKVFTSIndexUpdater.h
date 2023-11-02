
@interface CKVFTSIndexUpdater : NSObject {
    NSMutableDictionary * _commandCache;
    NSObject<CKVDatabaseReadWriteAccess> * _database;
    NSNumber * _itemTypeNumber;
    NSString * _originAppId;
}

- (void).cxx_destruct;
- (bool)deleteDataset;
- (bool)deleteRecordId:(id)arg1;
- (bool)deleteRecordIds:(id)arg1;
- (id)description;
- (id)initWithDatabase:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3;
- (bool)insertRecordsFromItem:(id)arg1 recordId:(id)arg2;

@end
