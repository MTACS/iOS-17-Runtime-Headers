
@protocol PKPaymentSetupDevicePickerViewControllerFlowDelegate <NSObject>

@required

- (void)devicePickerViewController:(PKPaymentSetupDevicePickerViewController *)arg1 didSelectProvisioningController:(PKPaymentProvisioningController *)arg2 product:(PKPaymentSetupProduct *)arg3;

@end
