
@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    NSString * connectionType;
    bool  isReallyJoin;
    NSString * personalizedBaseName;
    NSString * unlocalizedStatusString;
}

@property (nonatomic, retain) NSString *personalizedBaseName;

- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)personalizedBaseName;
- (void)primaryActionSelected:(bool)arg1;
- (void)selectedDeviceUpdated;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setupAndShowEditableBaseStationName;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)updateNavigationButtons;
- (void)validateAndUpdateNextButton;
- (void)viewWillAppear:(bool)arg1;

@end
