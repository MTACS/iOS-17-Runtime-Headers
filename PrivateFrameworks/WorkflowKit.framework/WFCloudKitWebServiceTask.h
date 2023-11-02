
@interface WFCloudKitWebServiceTask : WFCloudKitTask {
    NSURLSessionTask * _dataTask;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, retain) NSURLSessionTask *dataTask;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)cancel;
- (id)dataTask;
- (id)init;
- (id)operationQueue;
- (void)setDataTask:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
