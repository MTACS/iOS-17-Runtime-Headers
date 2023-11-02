
@interface VSTimeoutOperation : VSAsyncOperation {
    NSOperation * _operation;
    NSOperationQueue * _privateQueue;
    double  _timeout;
}

@property (nonatomic, readonly) NSOperation *operation;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithOperation:(id)arg1 timeout:(double)arg2;
- (id)operation;
- (id)privateQueue;
- (void)setPrivateQueue:(id)arg1;
- (double)timeout;

@end
