
@interface _CNDistinctUntilChangedObservable : CNObservable {
    id  _lastObservedResult;
    <CNObservable> * _observable;
}

- (void).cxx_destruct;
- (bool)_resultIsDistinctFromLastResult:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end
