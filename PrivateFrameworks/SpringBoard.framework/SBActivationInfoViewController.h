
@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate> {
    UITableView * _activationInfoTableView;
    NSLayoutConstraint * _activationInfoTableViewHeight;
    UIView * _containerView;
    _UILegibilitySettings * _legibilitySettings;
    NSString * _meid;
    NSArray * _mobileEquipmentInfo;
    NSArray * _mobileSubscriptionInfo;
    UIButton * _regulatoryInfoButton;
    NSString * _serial;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) NSArray *mobileEquipmentInfo;
@property (nonatomic, readonly) UIButton *regulatoryInfoButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activationInfoCell;
- (id)_backgroundViewForHeaderView:(id)arg1;
- (bool)_canShowWhileLocked;
- (id)_formattedCSN:(id)arg1;
- (id)_formattedICCID:(id)arg1;
- (id)_formattedIMEI:(id)arg1;
- (id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2;
- (id)_processDeviceInfo;
- (id)_processMobileEquipmentInfo:(id)arg1;
- (id)_processMobileSubscriptionInfo;
- (void)_telephonyStateChanged;
- (id)_titleForHeaderInSection:(long long)arg1;
- (void)_updateMobileEquipmentInfo;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)legibilitySettings;
- (void)loadView;
- (id)mobileEquipmentInfo;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)regulatoryInfoButton;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMobileEquipmentInfo:(id)arg1;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
