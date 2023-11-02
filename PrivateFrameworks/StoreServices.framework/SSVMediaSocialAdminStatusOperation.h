
@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {
    NSLock * _lock;
    id /* block */  _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)init;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
