
@interface PLInstrumentedOperationQueue : NSOperationQueue {
    id /* block */  _pl_operationCountChangedBlock;
}

@property (copy) id /* block */ pl_operationCountChangedBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)pl_operationCountChangedBlock;
- (void)setPl_operationCountChangedBlock:(id /* block */)arg1;

@end
