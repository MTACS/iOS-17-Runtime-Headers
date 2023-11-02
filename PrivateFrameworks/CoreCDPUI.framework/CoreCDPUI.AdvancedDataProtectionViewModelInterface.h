
@interface CoreCDPUI.AdvancedDataProtectionViewModelInterface : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _adpState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isWalrusAvailableForPrimaryAccount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isWalrusEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _localizedWalrusUnavailableMessage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _progressViewIsDisplayed;
    void accountRecoveryRowViewModel;
    void adpViewModelHelper;
    void advancedDataProtectionDataClassViewModel;
    void cdpContext;
    void contextProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  walrusStatePublisher;
    void walrusStateSubscription;
}

- (void).cxx_destruct;
- (id)init;

@end
