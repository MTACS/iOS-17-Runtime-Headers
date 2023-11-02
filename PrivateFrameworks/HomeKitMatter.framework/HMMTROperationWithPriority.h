
@interface HMMTROperationWithPriority : NSOperation {
    id /* block */  _operationBlock;
}

@property (nonatomic, readonly) id /* block */ operationBlock;

- (void).cxx_destruct;
- (id)initWithQueuePriority:(long long)arg1 block:(id /* block */)arg2;
- (void)main;
- (id /* block */)operationBlock;

@end
