
@interface STCommunicationLimitsScreenTimeDetailListController : PSListController {
    PSSpecifier * _allowContactsOnlySpecifier;
    PSSpecifier * _allowEveryoneSpecifier;
    PSSpecifier * _allowGroupsWithOneContactSpecifier;
    PSSpecifier * _allowedCommunicationGroupSpecifier;
    STCommunicationLimits * _communicationLimits;
}

@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowGroupsWithOneContactSpecifier;
@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;

+ (void)showCompatibilityAlertIfNeededWithCoordinator:(id)arg1 presentingViewController:(id)arg2 okHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_allowedCommunicationGroupFooterText:(id)arg1;
- (void)_didFinishEditingCommunicationLimit;
- (void)_updateAllowedCommunicationGroupFooterText;
- (id)allowContactsOnlySpecifier;
- (id)allowEveryoneSpecifier;
- (id)allowGroupsWithOneContactSpecifier;
- (id)allowedCommunicationGroupSpecifier;
- (id)communicationLimits;
- (void)setAllowContactsOnlySpecifier:(id)arg1;
- (void)setAllowEveryoneSpecifier:(id)arg1;
- (void)setAllowGroupsWithOneContactSpecifier:(id)arg1;
- (void)setAllowedCommunicationGroupSpecifier:(id)arg1;
- (void)setCommunicationLimits:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
