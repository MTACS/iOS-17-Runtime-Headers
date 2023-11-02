
@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation {
    CKFetchRecordsOperation * _currentOperation;
    CKOperationGroup * _operationGroup;
    NSArray * _records;
    WFCloudKitItemRequest * _request;
    WFCloudKitItemTask * _task;
}

@property (nonatomic, retain) CKFetchRecordsOperation *currentOperation;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) WFCloudKitItemRequest *request;
@property (nonatomic, retain) WFCloudKitItemTask *task;

- (void).cxx_destruct;
- (void)cancel;
- (id)currentOperation;
- (id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4;
- (id)operationGroup;
- (id)records;
- (id)request;
- (void)setCurrentOperation:(id)arg1;
- (void)setTask:(id)arg1;
- (void)start;
- (id)task;

@end
