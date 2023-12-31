
@protocol StepByStepUIDevicePicker

@required

- (NSString *)devicePickerLabel;
- (NSString *)deviceTableLabel;
- (void)setupDevices;
- (void)setupHeaderAndFooter;

@optional

- (void)prepareParams;
- (void)primaryActionSelected:(bool)arg1;
- (void)selectedDeviceUpdated;
- (void)updateNavigationButtons;

@end
