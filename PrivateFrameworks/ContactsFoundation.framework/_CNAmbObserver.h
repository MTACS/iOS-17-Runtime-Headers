
@interface _CNAmbObserver : NSObject <CNObserver> {
    <_CNAmbObserverDelegate> * _delegate;
    bool  _isWinner;
    <CNObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)declareWinner;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
