
@interface PassKitUI.ApplyControllerModel : NSObject <PKPaymentSetupViewControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _accountError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasFieldsSubmitted;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _nextView;
    void account;
    void applicationType;
    void applyController;
}

- (void).cxx_destruct;
- (id)init;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end
