
@interface FPUIAuthenticationTableViewController : UITableViewController <FPUIAuthenticationConnectionFlowDelegate> {
    <FPUIAuthenticationDelegate> * _authenticationDelegate;
    NSDictionary * _rowDescriptors;
    NSArray * _sectionDescriptors;
    unsigned long long  _state;
}

@property (nonatomic) <FPUIAuthenticationDelegate> *authenticationDelegate;
@property (nonatomic) bool canTransitionToNextStep;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *rowDescriptors;
@property (nonatomic, copy) NSArray *sectionDescriptors;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic) bool transitioning;

+ (id)defaultTitle;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (id)_rowDescriptorForIndexPath:(id)arg1;
- (id)_rowDescriptorsForSection:(long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)_stateDidChange;
- (id)_tableView:(id)arg1 viewOfType:(unsigned long long)arg2 inSection:(long long)arg3;
- (id)_titleView;
- (id)authenticationDelegate;
- (void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
- (void)authenticationDelegate:(id)arg1 didFinishWithError:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticationDelegate:(id)arg1 didReceiveCredentialDescriptors:(id)arg2;
- (void)authenticationDelegate:(id)arg1 didReceiveVolumeMountRepresentations:(id)arg2;
- (bool)canTransitionToNextStep;
- (id)defaultLeftBarButtonItem;
- (id)defaultRightBarButtonItem;
- (id)init;
- (bool)isTransitioning;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)rowDescriptors;
- (id)sectionDescriptors;
- (void)selectTextFieldAtIndexPath:(id)arg1;
- (void)setAuthenticationDelegate:(id)arg1;
- (void)setCanTransitionToNextStep:(bool)arg1;
- (void)setNavBarActivityIndicatorHidden:(bool)arg1;
- (void)setRowDescriptors:(id)arg1;
- (void)setSectionDescriptors:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setupTableViewSections;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

@end
