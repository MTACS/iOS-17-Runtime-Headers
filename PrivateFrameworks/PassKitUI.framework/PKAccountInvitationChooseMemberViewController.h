
@interface PKAccountInvitationChooseMemberViewController : UIViewController <PKAccountInvitationControllerObserver, PKDeviceSharingCapabilitiesManagerObserver, PKViewControllerPreflightable, UITableViewDelegate, UITableViewDelegatePrivate, _PKVisibilityBackdropViewDelegate> {
    NSNumberFormatter * _ageFormatter;
    double  _backdropWeight;
    _PKVisibilityBackdropView * _blurringView;
    PKAccountInvitationController * _controller;
    PKTableViewDiffableDataSource * _diffableDataSource;
    PKPaymentSetupDockView * _dockView;
    NSDictionary * _familyMemberPhotosByAltDSID;
    PKTableHeaderView * _headerView;
    NSIndexPath * _loadingInvitationIndexPath;
    NSNumberFormatter * _maximumAccountUsersFormatter;
    long long  _minimumParticipantAge;
    NSPersonNameComponentsFormatter * _nameFormatter;
    NSDictionary * _pendingFamilyMemberImagesByEmail;
    NSArray * _pendingFamilyMembers;
    double  _previousHeaderHeight;
    PKOSVersionRequirementRange * _requiredOSVersionRange;
    FACircleStateController * _stateController;
    UITableView * _tableView;
    NSArray * _totalFamilyMembers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_filterAvailableFamilyMembersFromMembers:(id)arg1;
- (void)_handleAddPersonTapped;
- (void)_openFamilyMemberSettings;
- (void)_reloadFamilyCollectionWithForceReload:(bool)arg1 completion:(id /* block */)arg2;
- (void)_reportAnalyticsViewDidAppear:(bool)arg1;
- (void)_setLoadingIndexPath:(id)arg1;
- (void)_updateHeaderFooterText;
- (void)_updateSnapshotAnimated:(bool)arg1;
- (void)dealloc;
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3;
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3;
- (void)didUpdateInvitationControllerFamilyCircle;
- (id)initWithController:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end
