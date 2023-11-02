
@interface CNPublishingSubject : CNObservable <CNObserver> {
    CNObservableContractEnforcement * _enforcement;
    CNObservable * _observable;
    NSMutableArray * _observers;
    <CNCancelable> * _upstreamToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNObservable *observable;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CNCancelable> *upstreamToken;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (id)_allObservers;
- (void)_removeObserver:(id)arg1;
- (void)_subscribeToObservableIfNecessary;
- (void)cleanUpAfterTermination;
- (id)enforcement;
- (id)init;
- (id)initWithObservable:(id)arg1;
- (id)observable;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)observers;
- (void)setUpstreamToken:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)upstreamToken;

@end
