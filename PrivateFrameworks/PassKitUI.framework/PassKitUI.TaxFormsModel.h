
@interface PassKitUI.TaxFormsModel : NSObject <PKAccountServiceObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _loading;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _taxForms;
    void accountService;
    void accounts;
    void exporter;
    void taxFormIDToAccountID;
}

- (void).cxx_destruct;
- (id)init;

@end
