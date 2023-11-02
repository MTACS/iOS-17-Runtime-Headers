
@interface SFSharedAccountsGroupInvitationsListViewController : UITableViewController <PSStateRestoration, SFAccountManagerPlatterWithDeclineButtonCellDelegate, SFSharedAccountsGroupInvitationViewControllerDelegate, WBSOngoingSharingGroupProviderSubscriber> {
    UINavigationController * _acceptInvitationResponseNavigationController;
    <SFSharedAccountsGroupInvitationsListViewControllerDelegate> * _delegate;
    SFTableViewDiffableDataSource * _diffableDataSource;
    NSString * _groupIDForInvitationBeingProcessed;
    KCSharingGroup * _groupToPresentInvitationForOnAppearance;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSharedAccountsGroupInvitationsListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellForItemIdentifier:(id)arg1;
- (void)_declineInvitationForGroup:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_isRespondingToLastInvitation:(id)arg1;
- (void)_presentAcceptInvitationResponseViewForGroup:(id)arg1;
- (void)_presentDeclineGroupInvitationAlertForTableViewCell:(id)arg1;
- (void)_presentErrorAlertWithString:(id)arg1;
- (void)_reloadDiffableDataSource;
- (bool)canBeShownFromSuspendedState;
- (id)delegate;
- (void)groupProviderReceivedUpdates:(id)arg1;
- (id)init;
- (id)initWithGroupToPresentInvitationForOnAppearance:(id)arg1;
- (void)invitationViewController:(id)arg1 acceptedInvitationForGroup:(id)arg2;
- (void)invitationViewController:(id)arg1 declinedInvitationForGroup:(id)arg2;
- (void)invitationViewController:(id)arg1 failedToAcceptInvitationWithError:(id)arg2;
- (void)invitationViewController:(id)arg1 failedToDeclineInvitationWithError:(id)arg2;
- (void)invitationViewControllerChoseNotToRespondToInvitation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)userDidPressDeclineButtonForPlatterTableViewCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
