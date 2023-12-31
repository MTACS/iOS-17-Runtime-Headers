
@interface _CNOnEmptyObservable : CNObservable {
    <CNObservable> * _nextObservable;
    <CNObservable> * _observable;
    bool  _observableIsEmpty;
}

@property (nonatomic, retain) <CNObservable> *observable;

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;
- (bool)isObservableEmpty;
- (id)observable;
- (void)observableDidSendResult;
- (void)setObservable:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)subscribeNextObservable:(id)arg1;

@end
