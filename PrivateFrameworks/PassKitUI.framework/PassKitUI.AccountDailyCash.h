
@interface PassKitUI.AccountDailyCash : NSObject <PKDashboardTransactionFetcherDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _amount;
    void account;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void source;
    void transactionFetcher;
}

- (void).cxx_destruct;
- (id)init;
- (void)transactionsChanged:(id)arg1;

@end
