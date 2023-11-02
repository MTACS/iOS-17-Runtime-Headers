
@interface WFCloudKitWebServiceRequest : NSObject {
    CKContainer * _container;
    CKDatabase * _database;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;

- (void).cxx_destruct;
- (id)cloudKitAPIToken;
- (id)cloudKitEnvironment;
- (id)container;
- (id)database;
- (id)databaseName;
- (id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2;
- (id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)getJSONFromURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getJSONFromURL:(id)arg1 headers:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithContainer:(id)arg1 database:(id)arg2;
- (void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(bool)arg3;
- (id)pathComponentsForType:(unsigned long long)arg1 parameters:(id)arg2;
- (id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)queryWithItemType:(Class)arg1 filter:(id)arg2;
- (id)recordsFromQueryResponse:(id)arg1;
- (id)urlForType:(unsigned long long)arg1 parameters:(id)arg2;
- (unsigned long long)webServiceForRequestType:(unsigned long long)arg1;

@end
