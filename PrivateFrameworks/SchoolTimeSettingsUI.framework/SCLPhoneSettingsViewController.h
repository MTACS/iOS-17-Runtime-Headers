
@interface SCLPhoneSettingsViewController : SCLListViewController {
    SCLActiveSpecifierDataSource * _activeSpecifierSource;
    NRDevice * _device;
    bool  _observingApplicationLifecycle;
    bool  _observingViewModel;
    SCLScheduleSettings * _scheduleSettings;
    SCLSchoolMode * _schoolMode;
    SCLSettingsViewModel * _viewModel;
}

@property (nonatomic, retain) SCLActiveSpecifierDataSource *activeSpecifierSource;
@property (nonatomic, retain) NRDevice *device;
@property (getter=isObservingApplicationLifecycle, nonatomic) bool observingApplicationLifecycle;
@property (getter=isObservingViewModel, nonatomic) bool observingViewModel;
@property (nonatomic, retain) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, retain) SCLSchoolMode *schoolMode;
@property (nonatomic, retain) SCLSettingsViewModel *viewModel;

- (void).cxx_destruct;
- (id)activeSpecifierSource;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)beginObservingViewModel:(id)arg1;
- (void)dealloc;
- (id)device;
- (void)endObservingViewModel:(id)arg1;
- (bool)isObservingApplicationLifecycle;
- (bool)isObservingViewModel;
- (void)loadSchoolModeIfNeeded;
- (void)loadSpecifierSource;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)scheduleDidChange;
- (id)scheduleSettings;
- (id)schoolMode;
- (void)setActiveSpecifierSource:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setObservingApplicationLifecycle:(bool)arg1;
- (void)setObservingViewModel:(bool)arg1;
- (void)setScheduleSettings:(id)arg1;
- (void)setSchoolMode:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)updateSchedule;
- (void)viewDidAppear:(bool)arg1;
- (id)viewModel;
- (id)viewModelForSettings:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
