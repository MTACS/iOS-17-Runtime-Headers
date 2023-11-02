
@interface HKPrescriptionPickerViewController : OBTableWelcomeController <HKHealthPrivacyServicePickerController, HKPrescriptionPickerCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    <HKHealthPrivacyServicePickerControllerDelegate> * _delegate;
    NSMutableSet * _enabledSamples;
    bool  _hasData;
    HKHealthStore * _healthStore;
    NSArray * _samples;
    NSMutableSet * _samplesPendingAuthorizationUpdate;
    NSUUID * _sessionIdentifier;
    OBBoldTrayButton * _shareButton;
    HKSource * _source;
    NSBundle * _visionBundle;
}

@property (nonatomic, readonly) NSSet *allSamples;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHealthPrivacyServicePickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *enabledSamples;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *sessionIdentifier;
@property (nonatomic, copy) HKSource *source;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enableSample:(id)arg1 enabled:(bool)arg2;
- (id)_explanationTextForSource:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_headerIcon;
- (id)_headerTitleForSource:(id)arg1;
- (id)_loadPreviewControllerForPrescription:(id)arg1;
- (id)_noDataTableViewCell;
- (void)_setUpCancelBarButtonItem;
- (void)_setUpFooterView;
- (void)_setUpTableView;
- (id)_sortedPrescriptions:(id)arg1;
- (void)_updateShareButtonState;
- (id)allSamples;
- (void)cancelButtonTapped:(id)arg1;
- (id)delegate;
- (void)didTapShowDetailsButtonForCell:(id)arg1;
- (void)didToggleSwitchForCell:(id)arg1 isOn:(bool)arg2;
- (id)enabledSamples;
- (id)initWithHealthStore:(id)arg1 samples:(id)arg2 enabledSamples:(id)arg3 source:(id)arg4;
- (void)learnMoreButtonTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSamples:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (id)source;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
