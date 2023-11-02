
@interface HKHealthSyncDisplayController : OBTableWelcomeController <HKHealthPrivacyServicePromptController> {
    HKCloudSyncControl * _cloudSyncControl;
    <HKHealthPrivacyServicePromptControllerDelegate> * _delegate;
    HKHealthStore * _healthStore;
    UIViewController * _nextViewController;
    <HKHealthPrivacyHostRemoteViewController> * _objectPickerDelegate;
    HKSource * _source;
}

@property (nonatomic, retain) HKCloudSyncControl *cloudSyncControl;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHealthPrivacyServicePromptControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) UIViewController *nextViewController;
@property (nonatomic) <HKHealthPrivacyHostRemoteViewController> *objectPickerDelegate;
@property (nonatomic, copy) HKSource *source;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_explanationTextForSource:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_headerTitleForSource:(id)arg1;
- (void)_nextButtonPressed:(id)arg1;
- (void)_setHeaderIcon;
- (void)_setUpFooterView;
- (void)_viewHealthRecordsCellTapped:(id)arg1;
- (id)cloudSyncControl;
- (id)delegate;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2;
- (id)nextViewController;
- (id)objectPickerDelegate;
- (void)setCloudSyncControl:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextViewController:(id)arg1;
- (void)setObjectPickerDelegate:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
