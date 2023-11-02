
@interface FPUIAuthenticationLandingViewController : FPUIAuthenticationTableViewController <FPUIAuthenticationServerInfoDelegate, UITextFieldDelegate> {
    NSURL * _initialConnectionURL;
    NSURL * _initialURL;
    NSURL * _initialUsername;
    NSArray * _recentServers;
    FPUIAuthenticationSectionDescriptor * _recentServersExtraTopPaddingSection;
    NSMutableArray * _recentServersRowDescriptors;
    FPUIAuthenticationSectionDescriptor * _recentServersSection;
    NSURL * _sanitizedURL;
    UITextField * _serverInputTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *initialConnectionURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canMoveToNextStep;
- (void)_connect:(id)arg1;
- (void)_connectToServer:(id)arg1;
- (void)_disectURLToComponents:(id)arg1;
- (void)_showRecentServersSectionWithRecentServers:(id)arg1 rowAnimation:(long long)arg2;
- (void)_transitionUIStateToConnecting;
- (void)_updateNextStep;
- (void)_updateRecentServerSectionVisibilityWithRowAnimation:(long long)arg1 forceReload:(bool)arg2;
- (void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
- (id)defaultRightBarButtonItem;
- (id)initWithURL:(id)arg1;
- (id)initialConnectionURL;
- (void)removeServerWithRepresentation:(id)arg1;
- (void)setInitialConnectionURL:(id)arg1;
- (void)setupTableViewSections;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateForChangedContentSizeCategory;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
