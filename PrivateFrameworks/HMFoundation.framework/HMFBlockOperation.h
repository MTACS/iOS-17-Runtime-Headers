
@interface HMFBlockOperation : HMFOperation {
    NSArray * _executionBlocks;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)arg1;
- (id)executionBlocks;
- (id)initWithTimeout:(double)arg1;
- (void)main;

@end
