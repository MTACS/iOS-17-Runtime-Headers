
@interface _CNObservableTakeUntilOperator : CNObservable <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate> {
    bool  _active;
    CNObservable * _input;
    <CNCancelable> * _inputToken;
    CNObservable * _signal;
    <CNCancelable> * _signalToken;
}

@property (getter=isActive) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CNObservable *input;
@property (retain) <CNCancelable> *inputToken;
@property (readonly) CNObservable *signal;
@property (retain) <CNCancelable> *signalToken;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithInput:(id)arg1 signal:(id)arg2;
- (id)input;
- (id)inputToken;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setInputToken:(id)arg1;
- (void)setSignalToken:(id)arg1;
- (bool)shouldMirrorEvent:(id)arg1;
- (id)signal;
- (void)signalDidGenerateEventWithObserver:(id)arg1;
- (id)signalToken;
- (id)subscribe:(id)arg1;

@end
