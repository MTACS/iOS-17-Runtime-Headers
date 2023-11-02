
@interface MKApplicationDatabase : NSObject {
    struct sqlite3 { } * _database;
}

- (bool)_addAppStoreIdentifier:(id)arg1;
- (void)addAppStoreIdentifier:(id)arg1;
- (bool)addIdentifier:(id)arg1;
- (void)addIdentifiers:(id)arg1;
- (id)appStoreIdentifiers;
- (void)begin;
- (void)close;
- (void)commit;
- (long long)countForAppStoreIdentifiers;
- (void)create;
- (void)dealloc;
- (void)drop;
- (id)identifiers;
- (id)init;
- (void)open:(id)arg1;
- (void)query:(id)arg1;
- (void)rollback;

@end
