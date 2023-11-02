
@interface WFCloudKitItemTask : WFCloudKitTask {
    CKOperation * _cloudOperation;
    NSError * _error;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, retain) CKOperation *cloudOperation;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)cancel;
- (id)cloudOperation;
- (id)error;
- (id)init;
- (id)operationQueue;
- (void)setCloudOperation:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
