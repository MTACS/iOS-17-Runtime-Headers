
@interface CRKBlockOperation : CATOperation {
    id /* block */  _operationBlock;
}

@property (nonatomic, readonly) id /* block */ operationBlock;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperationBlock:(id /* block */)arg1;
- (bool)isAsynchronous;
- (void)main;
- (id /* block */)operationBlock;

@end
