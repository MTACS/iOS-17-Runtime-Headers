
@interface STUsageDetailListController : STPINListViewController {
    STAllowanceProgressGroupSpecifierProvider * _allowancesProvider;
    STDatePickerBar * _datePickerBar;
    NSLayoutConstraint * _datePickerBottomConstraint;
    NSLayoutConstraint * _datePickerTopConstraint;
    STMostUsedGroupSpecifierProvider * _mostUsedProvider;
    STNoUsageDataView * _noUsageDataView;
    STNotificationsUsageGroupSpecifierProvider * _notificationsProvider;
    STDevicePickupsUsageGroupSpecifierProvider * _pickupsProvider;
    STScreenTimeUsageGroupSpecifierProvider * _screenTimeProvider;
    STSegmentedControlGroupSpecifierProvider * _segmentedControlProvider;
    STTestGroupSpecifierProvider * _testProvider;
}

@property (retain) STAllowanceProgressGroupSpecifierProvider *allowancesProvider;
@property (retain) STDatePickerBar *datePickerBar;
@property (retain) NSLayoutConstraint *datePickerBottomConstraint;
@property (getter=isDatePickerHidden) bool datePickerHidden;
@property (retain) NSLayoutConstraint *datePickerTopConstraint;
@property (retain) STMostUsedGroupSpecifierProvider *mostUsedProvider;
@property (retain) STNoUsageDataView *noUsageDataView;
@property (retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider;
@property (retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider;
@property (retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider;
@property (retain) STSegmentedControlGroupSpecifierProvider *segmentedControlProvider;
@property (retain) STTestGroupSpecifierProvider *testProvider;

+ (id)_getDevicesDropDownMenuWithCoordinator:(id)arg1 viewController:(id)arg2;
+ (id)_getUIActionForDevice:(id)arg1 deviceIndentifier:(id)arg2 coordinator:(id)arg3 weakSelf:(id)arg4;
+ (void)_setSelectedDeviceIdentifier:(id)arg1 coordinator:(id)arg2;
+ (void)_setSelectedUsageReportType:(unsigned long long)arg1 user:(id)arg2;
+ (void)selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 datePickerBar:(id)arg3 coordinator:(id)arg4;

- (void).cxx_destruct;
- (void)_devicesDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_hasUsageDataDidChange:(bool)arg1;
- (void)_reportCoreAnalyticsEventWithUser:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3;
- (id)allowancesProvider;
- (id)datePickerBar;
- (id)datePickerBottomConstraint;
- (id)datePickerTopConstraint;
- (void)dealloc;
- (bool)isDatePickerHidden;
- (id)mostUsedProvider;
- (id)noUsageDataView;
- (id)notificationsProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickupsProvider;
- (id)screenTimeProvider;
- (void)scrollViewDidScroll:(id)arg1;
- (id)segmentedControlProvider;
- (void)setAllowancesProvider:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDatePickerBar:(id)arg1;
- (void)setDatePickerBottomConstraint:(id)arg1;
- (void)setDatePickerHidden:(bool)arg1;
- (void)setDatePickerTopConstraint:(id)arg1;
- (void)setMostUsedProvider:(id)arg1;
- (void)setNoUsageDataView:(id)arg1;
- (void)setNotificationsProvider:(id)arg1;
- (void)setPickupsProvider:(id)arg1;
- (void)setScreenTimeProvider:(id)arg1;
- (void)setSegmentedControlProvider:(id)arg1;
- (void)setTestProvider:(id)arg1;
- (id)testProvider;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
