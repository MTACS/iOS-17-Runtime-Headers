
@interface CDPUIAccountRecoveryController : CDPUIController

- (id)_accountRecoveryDevicePickerEscapeOfferWithCDPContext:(id)arg1;
- (id)_accountRecoveryEscapeOfferForDevice:(id)arg1 cdpContext:(id)arg2;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1 cdpContext:(id)arg2;
- (void)_setupDevicePickerController:(id /* block */)arg1;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2;
- (bool)performingAccountRecovery;

@end
