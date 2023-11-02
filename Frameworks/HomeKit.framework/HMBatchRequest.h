
@interface HMBatchRequest : NSObject {
    HMClientContext * _clientContext;
    id /* block */  _completionHandler;
    id /* block */  _progressHandler;
    HMReportContext * _reportContext;
    NSArray * _requests;
}

@property (nonatomic, retain) HMClientContext *clientContext;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) HMReportContext *reportContext;
@property (nonatomic, retain) NSArray *requests;

+ (id)batchRequestWithExecuteRequests:(id)arg1;
+ (id)batchRequestWithReadRequests:(id)arg1;
+ (id)batchRequestWithWriteRequests:(id)arg1;
+ (bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;

- (void).cxx_destruct;
- (id)clientContext;
- (id /* block */)completionHandler;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;
- (id /* block */)progressHandler;
- (id)reportContext;
- (id)requests;
- (void)setClientContext:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setReportContext:(id)arg1;
- (void)setRequests:(id)arg1;

@end
