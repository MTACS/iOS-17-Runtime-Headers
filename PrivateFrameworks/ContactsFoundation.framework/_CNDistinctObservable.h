
@interface _CNDistinctObservable : CNObservable {
    <CNObservable> * _observable;
    NSMutableSet * _previouslyObservedResults;
}

- (void).cxx_destruct;
- (bool)_resultIsDistinct:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end
