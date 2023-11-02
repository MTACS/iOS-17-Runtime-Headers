
@interface NSBlockOperation : NSOperation {
    id /* block */  _block;
    NSMutableArray * _executionBlocks;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void)addExecutionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)executionBlocks;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)main;

@end
