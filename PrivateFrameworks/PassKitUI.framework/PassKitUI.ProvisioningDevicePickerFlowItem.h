
@interface PassKitUI.ProvisioningDevicePickerFlowItem : NSObject <PKAddPaymentPassDevicePickerDelegate> {
    void configuration;
    void context;
    void delegate;
    void identifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)pickerViewController:(id)arg1 didPickWebService:(id)arg2;

@end
