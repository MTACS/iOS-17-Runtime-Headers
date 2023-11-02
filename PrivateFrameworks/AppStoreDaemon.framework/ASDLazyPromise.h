
@interface ASDLazyPromise : ASDPromise {
    id /* block */  _executor;
    <ASDTaskScheduler> * _scheduler;
}

- (void).cxx_destruct;
- (id)initOnScheduler:(id)arg1 withExecutor:(id /* block */)arg2;
- (id)joinWithPromise:(id)arg1;
- (void)thenPerform:(id /* block */)arg1 orCatchError:(id /* block */)arg2 onScheduler:(id)arg3;

@end
