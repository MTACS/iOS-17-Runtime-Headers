
@interface SCWAsyncSerialQueue : NSObject {
    NSOperationQueue * _serialOperationQueue;
}

@property (nonatomic, retain) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) bool suspended;

- (void).cxx_destruct;
- (void)enqueueBlock:(id /* block */)arg1;
- (id)initWithQualityOfService:(long long)arg1;
- (bool)isSuspended;
- (id)serialOperationQueue;
- (void)setSerialOperationQueue:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)waitUntilEmpty;

@end
