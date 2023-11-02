
@interface _EFGeneratorObservable : EFObservable {
    EFCancelationToken * _cancelable;
    id /* block */  _condition;
    id /* block */  _delayForState;
    id /* block */  _nextStateForState;
    id /* block */  _resultFromState;
    <EFScheduler> * _scheduler;
    id  _state;
}

- (void).cxx_destruct;
- (bool)_isFinished;
- (void)_scheduleNextResultForObserver:(id)arg1;
- (void)_updateState;
- (id)initWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 delay:(id /* block */)arg5 scheduler:(id)arg6;
- (id)subscribe:(id)arg1;

@end
