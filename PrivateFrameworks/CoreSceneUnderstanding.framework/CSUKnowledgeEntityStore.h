
@interface CSUKnowledgeEntityStore : NSObject {
    NSMutableDictionary * _data;
    NSString * _databasePath;
    long long  _schemaVersion;
    int  _version;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int version;

- (void).cxx_destruct;
- (bool)commitWithError:(id*)arg1;
- (unsigned long long)count;
- (id)entityForIdentifier:(unsigned int)arg1;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)arg1;
- (id)initWithDatabasePath:(id)arg1 error:(id*)arg2;
- (bool)loadWithError:(id*)arg1;
- (bool)purgeDatabaseWithVersion:(int)arg1 error:(id*)arg2;
- (unsigned int)storeEntity:(id)arg1 error:(id*)arg2;
- (int)version;

@end
