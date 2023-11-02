
@interface CKAlertUtilities : NSObject {
    <CKAlertUtilitiesProtocol> * _delegate;
}

@property (nonatomic) <CKAlertUtilitiesProtocol> *delegate;

+ (id)_getCTPhoneNumber;
+ (id)_grabCTSIMStatus;
+ (bool)_isNumberEditable;
+ (id)coreTelephonyClient;
+ (long long)missingAlertTypeToNotify;
+ (id)phoneNumberInfo;
+ (id)selectedSubscriptionContext;

- (void).cxx_destruct;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_displayMissingInformationAlert:(long long)arg1;
- (void)_showNetworkPrefs:(long long)arg1;
- (void)checkMissingCarrierSetting;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
