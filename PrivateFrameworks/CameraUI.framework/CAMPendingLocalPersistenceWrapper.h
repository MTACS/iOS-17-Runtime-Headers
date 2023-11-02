
@interface CAMPendingLocalPersistenceWrapper : NSObject {
    id /* block */  _completionHandler;
    CAMCaptureRequest * _request;
    id  _result;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) CAMCaptureRequest *request;
@property (nonatomic, readonly) id result;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithRequest:(id)arg1 result:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)request;
- (id)result;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
