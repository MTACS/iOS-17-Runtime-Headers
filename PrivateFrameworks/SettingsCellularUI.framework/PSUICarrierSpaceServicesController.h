
@interface PSUICarrierSpaceServicesController : PSListController {
    NSArray * _appsList;
    PSUICarrierSpaceMyAccountWebViewController * _myAccountWebViewController;
    UINavigationController * _navCon;
}

@property (nonatomic, retain) NSArray *appsList;

- (void).cxx_destruct;
- (id)appsList;
- (void)carrierSpaceChanged;
- (id)getLogger;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)launchMyAccountInSafari:(id)arg1;
- (void)launchMyAccountInWebView:(id)arg1;
- (void)moreAppsTapped:(id)arg1;
- (id)primaryAppSpecifier;
- (void)setAppsList:(id)arg1;
- (bool)shouldShowMoreApps;
- (void)simStatusChanged;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
