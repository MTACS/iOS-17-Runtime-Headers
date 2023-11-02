
@protocol CDPUIDeviceToDeviceEncryptionUIProvider

@required

- (void)promptForCancelWithContext:(void *)arg1 vm:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPUIDeviceToDeviceEncryptionFlowContext *, <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)promptForUpgradeWithContext:(void *)arg1 vm:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPUIDeviceToDeviceEncryptionFlowContext *, <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)promptIneligibilityWithContext:(void *)arg1 vm:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPUIDeviceToDeviceEncryptionFlowContext *, <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
