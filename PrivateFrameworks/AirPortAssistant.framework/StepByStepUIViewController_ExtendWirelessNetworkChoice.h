
@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    int  _selectorChoice;
}

- (void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2;
- (bool)canBeExtendedWithDWDS;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)selectedDeviceUpdated;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)updateNavigationButtons;
- (void)viewWillAppear:(bool)arg1;

@end
