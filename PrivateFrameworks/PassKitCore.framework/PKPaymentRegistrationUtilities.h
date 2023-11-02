
@interface PKPaymentRegistrationUtilities : NSObject

+ (bool)_isPaymentSetupSupportedForWebService:(id)arg1;
+ (void)_shouldShowAddCardFlowForWebService:(id)arg1 completion:(id /* block */)arg2;
+ (void)_shouldShowAddCardFlowForWebService:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)configureWebServiceIfNecessary:(id)arg1 completion:(id /* block */)arg2;
+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)arg1 completion:(id /* block */)arg2;
+ (void)shouldShowPasscodeAccessibilityOverride:(id)arg1 completion:(id /* block */)arg2;
+ (void)shouldShowWalletInBuddy:(id)arg1 completion:(id /* block */)arg2;
+ (void)shouldShowWalletInDigitalSeparation:(id)arg1 withDeviceSpecificCompletion:(id /* block */)arg2;
+ (void)shouldShowWalletInSettings:(id)arg1 completion:(id /* block */)arg2;
+ (void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)arg1 completion:(id /* block */)arg2;

@end
