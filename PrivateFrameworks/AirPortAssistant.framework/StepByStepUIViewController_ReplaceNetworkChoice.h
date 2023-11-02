
@interface StepByStepUIViewController_ReplaceNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>

- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)prepareParams;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (void)updateNavigationButtons;

@end
