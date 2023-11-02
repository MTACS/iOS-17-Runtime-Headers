
@interface PassKitUI.SavingsStatementsModel : NSObject <PKAccountServiceObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _loading;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _statements;
    void accountService;
    void accounts;
    void exporter;
    void statementIDToAccountID;
}

- (void).cxx_destruct;
- (id)init;

@end
