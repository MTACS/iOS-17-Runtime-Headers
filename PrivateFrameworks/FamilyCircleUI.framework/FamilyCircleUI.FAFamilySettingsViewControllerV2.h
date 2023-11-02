
@interface FamilyCircleUI.FAFamilySettingsViewControllerV2 : FARestorableViewController <FamilyCircleUI.FAFamilySettingsPageSwiftUIDelegate> {
    void accountManager;
    void activityIndicatorView;
    void activityIndicatorViewForAdd;
    void addMemberButton;
    void appleAccount;
    void appleCardFamilySettingsViewModel;
    void appleCashHandler;
    void currentStateController;
    void delegate;
    void familySettingsHelper;
    void grandSlamSigner;
    void locationViewModel;
    void peopleDiscoveryService;
    void pictureStore;
    void timeToView;
    void viewModel;
}

@property (nonatomic) <_TtP14FamilyCircleUI40FAFamilySettingsViewControllerV2Delegate_> *delegate;
@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (void)addFamilyMemberButtonWasTapped;
- (id)delegate;
- (void)didSelectSubscriptionWithURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)didSelectSubscriptionWithURLMemberDetails:(void *)arg1 familyMemberDSID:(void *)arg2 serviceName:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 21: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)didTapAddRemoteGuardianFor:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyCircle:(id)arg3 pictureStore:(id)arg4 accountManager:(id)arg5 peopleDiscoveryService:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)pendingFamilyMemberWasTapped:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopFamilySharing;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
