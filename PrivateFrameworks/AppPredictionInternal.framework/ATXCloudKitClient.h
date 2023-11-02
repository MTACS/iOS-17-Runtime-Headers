
@interface ATXCloudKitClient : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKContainer * _container;
    CKDatabase * _database;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKDatabase *database;

+ (id)clientWithContainerIdentifier:(id)arg1 useManatee:(bool)arg2 callbackQueue:(id)arg3;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)container;
- (id)database;
- (void)deleteRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAccountInfoWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecords:(id)arg1 inZone:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithContainerIdentifier:(id)arg1 useManatee:(bool)arg2 callbackQueue:(id)arg3;
- (id)initWithDatabase:(id)arg1 inContainer:(id)arg2 callbackQueue:(id)arg3;
- (void)saveRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleDatabaseOperation:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDatabase:(id)arg1;

@end
