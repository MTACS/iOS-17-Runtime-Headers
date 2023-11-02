
@interface PassKitUI.InStoreTopUpTokenModel : NSObject <PKAccountServiceObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _displayableError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void account;
    void accountService;
    void paymentWebService;
    void timer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didUpdateInStoreTopUpToken:(id)arg1 forAccountIdentifier:(id)arg2;
- (id)init;

@end
