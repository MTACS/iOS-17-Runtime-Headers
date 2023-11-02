
@interface CNObservableContractEnforcement : NSObject <CNObserver> {
    unsigned long long  _state;
    CNObservableContractTerminationContext * _terminationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)os_log;
+ (bool)shouldEnforceRxProtocols;
+ (bool)shouldSwizzleNilResults;

- (void).cxx_destruct;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
