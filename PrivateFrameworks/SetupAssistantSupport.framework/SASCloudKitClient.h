
@interface SASCloudKitClient : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKContainer * _container;
    CKDatabase * _database;
    NSObject<OS_xpc_object> * _xpcActivity;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivity;

- (void).cxx_destruct;
- (void)_scheduleDatabaseOperation:(id)arg1;
- (id)callbackQueue;
- (id)container;
- (id)database;
- (void)fetchCurrentDeviceIDWithCompletion:(id /* block */)arg1;
- (void)fetchRecordZone:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRecords:(id)arg1 inZone:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithContainerIdentifier:(id)arg1 callbackQueue:(id)arg2;
- (id)initWithDatabase:(id)arg1 inContainer:(id)arg2 callbackQueue:(id)arg3;
- (void)saveRecord:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)saveRecordZone:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)setCallbackQueue:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setXpcActivity:(id)arg1;
- (id)xpcActivity;

@end
