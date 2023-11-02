
@protocol NPKPaymentProvisioningFlowControllerProtocol <NSObject>

@required

- (void)acceptTerms:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)acknowledgeAppleBalanceAccountDetailsWithProduct:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)acknowledgeMoreInformation:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)acknowledgeWelcome:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)chooseCardsOnFileFlowForProduct:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2 preloadMetadata:(bool)arg3;
- (void)chooseCredentials:(NSArray *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseEMoneyProductFromFlowPickerSection:(NPKPaymentProvisioningFlowPickerSection *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseFlowForPickerItem:(NPKPaymentProvisioningFlowPickerItem *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseManualEntry:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)chooseProduct:(PKPaymentSetupProduct *)arg1 includeCardsOnFile:(bool)arg2 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg3;
- (void)chooseProduct:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseReaderMode:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)chooseTransitProductFromFlowPickerSection:(NPKPaymentProvisioningFlowPickerSection *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (<NPKPaymentProvisioningFlowControllerDelegate> *)delegate;
- (void)handleDigitalIssuanceAmount:(NSDecimalNumber *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleDigitalIssuanceAmount:(NSDecimalNumber *)arg1 serviceProviderProduct:(PKDigitalIssuanceServiceProviderProduct *)arg2 item:(PKDigitalIssuanceServiceProviderItem *)arg3 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg4;
- (void)handleIssuerApplicationAddRequest:(PKAddPaymentPassRequest *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleIssuerVerificationChannel:(PKVerificationChannel *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleIssuerVerificationCode:(NSString *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleIssuerVerificationFields:(NSArray *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleManualEntryFields:(NSArray *)arg1 credential:(PKPaymentCredential *)arg2 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg3;
- (void)handlePasscodeUpgradeCompleteWithSuccess:(bool)arg1 error:(NSError *)arg2 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg3;
- (void)handleProductSelection:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleReaderModeFields:(NSArray *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)presentTransitServiceProviderProductsWithRequestContext:(NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext *)arg1;
- (void)reset;
- (void)setDelegate:(id <NPKPaymentProvisioningFlowControllerDelegate>)arg1;
- (void)setDigitalIssuanceSupported:(bool)arg1;
- (void)setReaderModeProvisioningSupported:(bool)arg1;
- (void)setSeparateLocalDeviceEntryRequired:(bool)arg1;
- (void)skipIssuerVerification:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)skipProvisioning:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)startInAppProvisioningFlowWithConfiguration:(PKAddPaymentPassRequestConfiguration *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)startIssuerVerificationFlowForPaymentPass:(PKPaymentPass *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)startProvisioningFlow:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;

@end
