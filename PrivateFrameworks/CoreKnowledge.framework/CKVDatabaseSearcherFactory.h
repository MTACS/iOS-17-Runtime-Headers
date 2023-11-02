
@interface CKVDatabaseSearcherFactory : NSObject <CKVDatabaseSearcherProvider> {
    CKVIndexManager * _indexManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIndexManager:(id)arg1;
- (id)makeDatabaseSearcher;

@end
