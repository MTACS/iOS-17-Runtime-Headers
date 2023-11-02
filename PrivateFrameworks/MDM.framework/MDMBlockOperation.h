
@interface MDMBlockOperation : CATOperation {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)isAsynchronous;
- (void)main;
- (void)setBlock:(id /* block */)arg1;

@end
