
@interface VSAMSRequestOperation : VSAsyncOperation {
    NSOperationQueue * _privateQueue;
    VSAMSRequest * _request;
    VSOptional * _result;
}

@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, copy) VSAMSRequest *request;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)privateQueue;
- (id)request;
- (id)result;
- (void)setPrivateQueue:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (void)urlForRequestType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end
