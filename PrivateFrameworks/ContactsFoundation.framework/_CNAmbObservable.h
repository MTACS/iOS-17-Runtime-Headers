
@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate> {
    NSArray * _observables;
    NSMapTable * _tokensByObserver;
    bool  _winnerDeclared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelRemainingObservables;
- (id)init;
- (id)initWithObservables:(id)arg1;
- (void)observerWillRelayEvent:(id)arg1;
- (id)subscribe:(id)arg1;

@end
