
@interface PassKitUI.TransactionsModel : NSObject <PKPaymentServiceDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _notificationServiceUpdatesEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _transactions;
    void pass;
    void paymentService;
    void settingsModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)passSettingsDidChangeWithNotification:(id)arg1;

@end
