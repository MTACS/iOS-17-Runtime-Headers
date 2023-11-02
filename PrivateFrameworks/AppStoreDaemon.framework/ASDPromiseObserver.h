
@interface ASDPromiseObserver : NSObject {
    id /* block */  _errorBlock;
    <ASDTaskScheduler> * _scheduler;
    id /* block */  _valueBlock;
}

- (void).cxx_destruct;
- (id)initWithValueBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2 scheduler:(id)arg3;
- (void)notifyRejectedWithError:(id)arg1;
- (void)notifyResolvedWithValue:(id)arg1;

@end
