
@interface MKPhotoLibraryAssetDatabase : NSObject {
    unsigned long long  _count;
    struct sqlite3 { } * _database;
}

- (void)addAsset:(id)arg1;
- (id)asset;
- (void)begin;
- (void)close;
- (id)collections;
- (void)commit;
- (unsigned long long)count;
- (unsigned long long)countForCollection:(id)arg1;
- (void)create;
- (void)dealloc;
- (id)identifiersForCollection:(id)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (id)initWithType:(unsigned long long)arg1;
- (void)open:(id)arg1;
- (void)query:(id)arg1;
- (void)remove:(id)arg1;
- (void)rollback;
- (void)setIdentifier:(id)arg1 forAsset:(id)arg2;

@end
