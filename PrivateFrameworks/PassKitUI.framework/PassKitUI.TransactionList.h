
@interface PassKitUI.TransactionList : NSObject <PKDashboardTransactionFetcherDelegate, PKForegroundActiveArbiterObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _filter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _rows;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _yearlyGroups;
    void account;
    void activeState;
    void iconGenerator;
    void source;
    void timer;
    void transactionFetcher;
}

- (void).cxx_destruct;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)init;
- (void)transactionsChanged:(id)arg1;

@end
