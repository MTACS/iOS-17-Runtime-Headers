
@interface PassKitUI.AccountBalanceHistory : NSObject <PKAccountServiceObserver, PKForegroundActiveArbiterObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _balances;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _dateRange;
    void account;
    void accountService;
    void activeState;
    void maxDataPoint;
    void range;
}

- (void).cxx_destruct;
- (void)accountChanged:(id)arg1;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)init;

@end
