
@interface PassKitUI.WalletSettingsModel : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _contactFormatValidator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _defaultPass;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hardwareConfigurationModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _orderTrackingEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _passes;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _paymentDefaults;
    void cachedTransactionModelsByUniqueID;
    void defaults;
    void passLibrary;
    void paymentService;
    void publishers;
    void recents;
}

- (void)passLibraryDidChangeWithNotification:(id)arg1;
- (void)paymentOptionsDidChange;

@end
