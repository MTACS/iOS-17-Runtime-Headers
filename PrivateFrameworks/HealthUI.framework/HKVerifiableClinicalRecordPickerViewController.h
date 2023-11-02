
@interface HKVerifiableClinicalRecordPickerViewController : OBTableWelcomeController <HKHealthPrivacyServicePickerController, UITableViewDataSource, UITableViewDelegate> {
    NSSet * _allSamples;
    OBLinkTrayButton * _cancelButton;
    NSArray * _clinicalRecords;
    <HKHealthPrivacyServicePickerControllerDelegate> * _delegate;
    NSMutableSet * _enabledSamples;
    bool  _hasData;
    NSArray * _recordTypes;
    NSUUID * _sessionIdentifier;
    OBBoldTrayButton * _shareButton;
    NSDictionary * _signedRecordsByIdentifier;
    HKSource * _source;
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
- (id)_explanationText:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_headerIconForRecordTypes:(id)arg1;
- (id)_headerTitleForRecordTypes:(id)arg1;
- (id)_noDataExplanationTextForRecordTypes:(id)arg1;
- (id)_noDataTableViewCell;
- (void)_setUpAccessoryButton;
- (void)_setUpCancelBarButtonItem;
- (void)_setUpFooterView;
- (void)_setUpTableView;
- (void)_updateCancelButtonState;
- (void)_updateShareButtonState;
- (id)allSamples;
- (void)cancelButtonTapped:(id)arg1;
- (id)delegate;
- (id)enabledSamples;
- (id)initWithClinicalRecords:(id)arg1 signedRecords:(id)arg2 recordTypes:(id)arg3;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)noDataLearnMoreButtonTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSamples:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)showDetailsButtonTappedAtIndexPath:(id)arg1;
- (id)source;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
