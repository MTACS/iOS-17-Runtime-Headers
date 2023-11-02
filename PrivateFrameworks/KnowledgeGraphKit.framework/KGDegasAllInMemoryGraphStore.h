
@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase * _database;
    unsigned long long  _transactionCounter;
    NSURL * _url;
}

+ (bool)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)destroyAtURL:(id)arg1 error:(id*)arg2;
+ (bool)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (id)persistentStoreFileExtension;

- (void).cxx_destruct;
- (bool)addEdges:(id)arg1 error:(id*)arg2;
- (bool)addNodes:(id)arg1 error:(id*)arg2;
- (bool)beginTransactionWithError:(id*)arg1;
- (void)close;
- (bool)commitTransactionWithError:(id*)arg1;
- (bool)copyToURL:(id)arg1 error:(id*)arg2;
- (void)enumerateModelEdgesWithBlock:(id /* block */)arg1;
- (void)enumerateModelNodesWithBlock:(id /* block */)arg1;
- (id)graphIdentifier;
- (unsigned long long)graphVersion;
- (id)initWithURL:(id)arg1;
- (bool)openWithMode:(unsigned long long)arg1 error:(id*)arg2;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (void)setGraphVersion:(unsigned long long)arg1;
- (bool)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3;
- (bool)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3;
- (id)url;

@end
