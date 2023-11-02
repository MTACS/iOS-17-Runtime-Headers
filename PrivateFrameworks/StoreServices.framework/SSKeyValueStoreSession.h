
@interface SSKeyValueStoreSession : NSObject {
    SSSQLiteDatabase * _database;
}

@property (nonatomic, readonly) SSSQLiteDatabase *database;

- (id)copyAccountDictionaryForDomain:(id)arg1;
- (id)copyDataForDomain:(id)arg1 key:(id)arg2;
- (id)copyValueForDomain:(id)arg1 key:(id)arg2;
- (id)database;
- (void)dealloc;
- (id)existingEntityForDomain:(id)arg1 key:(id)arg2;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2;
- (id)initWithDatabase:(id)arg1;

@end
