
@interface _EFDistinctUntilChangedObservable : EFObservable {
    id  _lastObservedResult;
    NSLock * _lock;
    <EFObservable> * _observable;
}

- (void).cxx_destruct;
- (bool)_isLastResultDistinctFromResult:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end
