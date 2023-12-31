
@protocol CXProviderExtensionVendorContextDelegate <NSObject>

@required

- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledActionTimeout:(CXAction *)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledAudioSessionActivationStateChangedTo:(bool)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 receivedCommittedTransaction:(CXTransaction *)arg2;

@end
