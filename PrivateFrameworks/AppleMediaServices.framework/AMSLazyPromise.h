
@interface AMSLazyPromise : AMSPromise {
    id /* block */  _block;
    bool  _executedBlock;
    double  _timeout;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) bool executedBlock;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (bool)_runBlock;
- (void)addBlock:(id /* block */)arg1 orCallWithResult:(id /* block */)arg2;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)block;
- (bool)executedBlock;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithTimeout:(double)arg1 block:(id /* block */)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithError:(id*)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setBlock:(id /* block */)arg1;
- (void)setExecutedBlock:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
