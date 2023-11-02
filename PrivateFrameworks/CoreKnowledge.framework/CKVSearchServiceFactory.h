
@interface CKVSearchServiceFactory : NSObject <CKVSearchServiceProvider> {
    NSObject<CKVDatabaseSearcherProvider> * _databaseSearcherProvider;
    CKVSpanMatcherFactory * _spanMatcherProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;
- (id)searchServiceWithUserId:(id)arg1;

@end
