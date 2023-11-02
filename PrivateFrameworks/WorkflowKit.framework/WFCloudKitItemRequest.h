
@interface WFCloudKitItemRequest : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKContainer * _container;
    CKDatabase * _database;
    NSObject<OS_dispatch_queue> * _operationWaitingQueue;
    bool  _performExpensiveFetchOperations;
    NSObject<OS_xpc_object> * _xpcActivity;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationWaitingQueue;
@property (nonatomic) bool performExpensiveFetchOperations;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivity;

+ (void)assignRecordValue:(id)arg1 toItem:(id)arg2 withProperty:(id)arg3 resolvedReferences:(id)arg4;
+ (id)createRecordFromItem:(id)arg1 zoneID:(id)arg2;
+ (id)createRecordIDWithName:(id)arg1 zoneID:(id)arg2;
+ (id)desiredKeysFromProperties:(id)arg1 itemType:(Class)arg2;
+ (void)hydrateItem:(id)arg1 withRecord:(id)arg2 resolvedReferences:(id)arg3 setNilValues:(bool)arg4;
+ (void)hydrateItem:(id)arg1 withRecord:(id)arg2 setNilValues:(bool)arg3;
+ (id)itemValueForRecordValue:(id)arg1 item:(id)arg2 property:(id)arg3 resolvedReferences:(id)arg4;
+ (id)recordFromSystemFieldsData:(id)arg1 error:(id*)arg2;
+ (id)recordValueForItemValue:(id)arg1 item:(id)arg2 property:(id)arg3 recordKey:(id)arg4 zoneID:(id)arg5;
+ (id)systemFieldsDataFromRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)container;
- (id)createTaskCancelledError;
- (id)database;
- (id)deleteItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchConfigurationAssetWithType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchConfigurationAssetWithType:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchItemWithID:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 sortDescriptors:(id)arg5 resultsLimit:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 sortDescriptors:(id)arg5 resultsLimit:(unsigned long long)arg6 qualityOfService:(long long)arg7 completionHandler:(id /* block */)arg8;
- (id)fetchRecordIDs:(id)arg1 desiredKeys:(id)arg2 operationGroup:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithContainer:(id)arg1 database:(id)arg2;
- (id)operationWaitingQueue;
- (bool)performExpensiveFetchOperations;
- (void)setPerformExpensiveFetchOperations:(bool)arg1;
- (void)setXpcActivity:(id)arg1;
- (id)updateItems:(id)arg1 setNilValues:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)updateItems:(id)arg1 setNilValues:(bool)arg2 qualityOfService:(long long)arg3 timeoutIntervalForRequest:(double)arg4 completionHandler:(id /* block */)arg5;
- (id)xpcActivity;

@end
