
@interface _CNObservableTakeUntilInputObserver : NSObject <CNObserver> {
    <_CNObservableTakeUntilInputObserverDelegate> * _delegate;
    <CNObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <_CNObservableTakeUntilInputObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <CNObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;
- (id)observer;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
