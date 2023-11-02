
@interface PassKitUI.PaymentSetupProductDevicePickerFlowItem : NSObject <PKPaymentSetupDevicePickerViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void product;
    void selectedProduct;
    void viewController;
}

- (void).cxx_destruct;
- (void)devicePickerViewController:(id)arg1 didSelectProvisioningController:(id)arg2 product:(id)arg3;
- (id)init;

@end
