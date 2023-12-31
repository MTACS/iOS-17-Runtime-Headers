
@interface RCAsyncSerialQueue : NSObject {
    NSOperationQueue * _serialOperationQueue;
}

@property (nonatomic, retain) NSOperationQueue *serialOperationQueue;
@property (nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)cancelAllBlocks;
- (void)enqueueBlock:(id /* block */)arg1;
- (void)enqueueBlockForMainThread:(id /* block */)arg1;
- (void)enqueueOperation:(id)arg1;
- (id)init;
- (id)initWithQualityOfService:(long long)arg1;
- (id)serialOperationQueue;
- (void)setSerialOperationQueue:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(id /* block */)arg2;

@end
