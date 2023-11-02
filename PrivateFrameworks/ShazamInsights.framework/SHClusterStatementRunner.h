
@interface SHClusterStatementRunner : NSObject {
    NSURL * _databaseURL;
    struct sqlite3 { } * _db;
    NSArray * _validDatabaseKeys;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic, readonly) NSArray *validDatabaseKeys;

+ (id)supportedKeys;

- (void).cxx_destruct;
- (id)databaseURL;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (id)mediaItemsAtCohesionLevel:(long long)arg1 forQueryMediaIDs:(id)arg2 filteredBySeedMediaIDs:(id)arg3 error:(id*)arg4;
- (id)mediaItemsFromPropertyCollection:(id)arg1 error:(id*)arg2;
- (id)mediaItemsSimilarToMediaItemValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)mediaItemsWithQuery:(id)arg1 tokens:(id)arg2 objects:(id)arg3 error:(id*)arg4;
- (id)supportedKeysForDatabase;
- (id)supportedKeysForDatabaseAsString;
- (id)supportedKeysForDatabaseAsStringWithPrefix:(id)arg1;
- (id)validDatabaseKeys;

@end
