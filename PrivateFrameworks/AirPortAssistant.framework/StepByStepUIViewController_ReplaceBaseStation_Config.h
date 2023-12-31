
@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    UIView * justTextContainerView2;
    UILabel * justTextLabel2;
    NSString * personalizedBaseName;
}

@property (nonatomic, retain) UIView *justTextContainerView2;
@property (nonatomic, retain) NSString *personalizedBaseName;

- (void)dealloc;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (id)justTextContainerView2;
- (void)loadView;
- (id)personalizedBaseName;
- (void)prepareParams;
- (void)primaryActionSelected:(bool)arg1;
- (void)selectedDeviceUpdated;
- (void)setJustTextContainerView2:(id)arg1;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setupDevices;
- (void)setupEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)updateNavigationButtons;
- (void)validateAndUpdateNextButton;
- (void)viewWillAppear:(bool)arg1;

@end
