
@interface CoreCDPUI.AccountRecoveryRowViewModel : NSObject <AIDAAccountManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isRecoveryEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isSpinnerActive;
    void accountRecoveryStatusFetcher;
    void cdpContext;
    void delegate;
}

- (void).cxx_destruct;
- (id)accountsForAccountManager:(id)arg1;
- (id)init;

@end
