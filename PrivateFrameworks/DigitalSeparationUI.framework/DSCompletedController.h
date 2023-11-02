
@interface DSCompletedController : DSOBWelcomeController <CLFindMyAccessoryManagerDelegate, DSController> {
    bool  _UTAlertsEnabled;
    CLFindMyAccessoryManager * _accessoryManager;
    <DSNavigationDelegate> * _delegate;
    FAFamilyMember * _familyMember;
    NSObject<OS_dispatch_group> * _fetchingGroup;
    NSLayoutConstraint * _heightConstraint;
    UIActivityIndicatorView * _spinner;
    bool  _walletSharing;
}

@property (nonatomic) bool UTAlertsEnabled;
@property (nonatomic, retain) CLFindMyAccessoryManager *accessoryManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) FAFamilyMember *familyMember;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchingGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) bool walletSharing;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)UTAlertsEnabled;
- (id)accessoryManager;
- (void)addFamilyBullet;
- (void)addHomeBullet;
- (void)addUTAlerts;
- (void)addWalletBullet;
- (id)delegate;
- (id)familyMember;
- (void)fetchAdditionalSharingWithCompletion:(id /* block */)arg1;
- (void)fetchCompleted;
- (id)fetchingGroup;
- (void)findMyAccessoryManager:(id)arg1 didFailWithError:(id)arg2 forDevice:(id)arg3;
- (void)findMyAccessoryManager:(id)arg1 didFetchStatusOfUTEnablementRequirementsWithStatus:(id)arg2 withError:(id)arg3;
- (id)heightConstraint;
- (id)init;
- (void)learnMorePressed;
- (void)setAccessoryManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setFetchingGroup:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setUTAlertsEnabled:(bool)arg1;
- (void)setWalletSharing:(bool)arg1;
- (id)spinner;
- (void)startContentSpinner;
- (void)stopContentSpinner;
- (void)viewDidLoad;
- (bool)walletSharing;

@end
