
@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo {
    CKDPCSCache * _cache;
    <CKSQLiteItem> * _itemID;
    unsigned long long  _options;
}

@property (nonatomic, retain) CKDPCSCache *cache;
@property (nonatomic, retain) <CKSQLiteItem> *itemID;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)cache;
- (id)itemID;
- (unsigned long long)options;
- (void)setCache:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
