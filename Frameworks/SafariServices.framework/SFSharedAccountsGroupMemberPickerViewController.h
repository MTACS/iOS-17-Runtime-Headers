
@interface SFSharedAccountsGroupMemberPickerViewController : UIViewController <CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer, CNComposeRecipientTextViewDelegate> {
    NSMutableDictionary * _addressToEligibility;
    NSMutableSet * _addressesCurrentlyBeingCheckedForAvailability;
    NSMutableSet * _addressesThatHaveBeenFetched;
    NSSet * _alreadyAddedAddresses;
    CNAutocompleteResultsTableViewController * _contactsResultsTableViewController;
    CNAutocompleteSearchManager * _contactsSearchManager;
    NSNumber * _currentSearchTaskID;
    <SFSharedAccountsGroupMemberPickerViewControllerDelegate> * _delegate;
    NSMutableDictionary * _recipientGroupToEligibility;
    CNComposeRecipientTextView * _recipientTextView;
    NSLayoutConstraint * _recipientTextViewHeightConstraint;
    bool  _shouldConfirmAddingRecipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSharedAccountsGroupMemberPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldConfirmAddingRecipients;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMembersButtonPressed;
- (void)_addRecipient:(id)arg1;
- (bool)_cachedIsRecipientEligible:(id)arg1;
- (void)_cancelButtonPressed;
- (bool)_doesGroupOnlyContainKnownContacts:(id)arg1;
- (void)_fetchEligibilityForRecipient:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleSelectionForMultipleRecipientsInGroup:(id)arg1;
- (void)_handleSelectionForSingleRecipient:(id)arg1;
- (bool)_hasEligibilityCachedForRecipient:(id)arg1;
- (bool)_isAddressAlreadyPartOfGroupOrInvitedAddresses:(id)arg1;
- (bool)_isEveryMemberInContactsGroupAlreadyInSharingGroup:(id)arg1;
- (id)_recipientsWithEligibleAddressesAsDefaultAddressesIfPossible:(id)arg1;
- (void)_resetSearchQuery;
- (void)_updatePreferredHandleForRecipientIfNecessary:(id)arg1;
- (void)_updateRecipientTextViewHeight;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(id /* block */)arg3;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (id)delegate;
- (void)finishedSearchingForAutocompleteResults;
- (id)initWithAlreadyAddedAddresses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldConfirmAddingRecipients:(bool)arg1;
- (bool)shouldConfirmAddingRecipients;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
