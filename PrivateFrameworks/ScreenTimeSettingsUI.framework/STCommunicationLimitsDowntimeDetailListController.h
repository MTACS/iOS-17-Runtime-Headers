
@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation> {
    PSSpecifier * _addContactsSpecifier;
    PSSpecifier * _allowContactsOnlySpecifier;
    PSSpecifier * _allowEveryoneSpecifier;
    PSSpecifier * _allowGroupsWithOneContactSpecifier;
    PSSpecifier * _allowSpecificContactsSpecifier;
    PSSpecifier * _allowedCommunicationGroupSpecifier;
    PSSpecifier * _allowedContactsGroupSpecifier;
    NSMutableArray * _allowedContactsSpecifiers;
    STCommunicationLimits * _communicationLimits;
    bool  _syncingWhitelistedContacts;
    CNUIFamilyMemberWhitelistedContactsController * _whitelistedContactsController;
}

@property (retain) PSSpecifier *addContactsSpecifier;
@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowGroupsWithOneContactSpecifier;
@property (retain) PSSpecifier *allowSpecificContactsSpecifier;
@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) PSSpecifier *allowedContactsGroupSpecifier;
@property (retain) NSMutableArray *allowedContactsSpecifiers;
@property (retain) STCommunicationLimits *communicationLimits;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool syncingWhitelistedContacts;
@property (retain) CNUIFamilyMemberWhitelistedContactsController *whitelistedContactsController;

- (void).cxx_destruct;
- (id)_allowedCommunicationGroupFooterText:(id)arg1;
- (id)_allowedContactDetailLabelText:(id)arg1;
- (id)_allowedContactsSpecifiers;
- (void)_didFinishEditingCommunicationLimit;
- (void)_didFinishSyncingWhitelistedContacts;
- (long long)_downtimeCommunicationLimitForSpecifier:(id)arg1;
- (void)_selectLeastRestrictiveOptionIfNecessary;
- (void)_startSyncingWhitelistedContacts;
- (void)_updateAllowedCommunicationGroupFooterText;
- (id)addContactsSpecifier;
- (id)allowContactsOnlySpecifier;
- (id)allowEveryoneSpecifier;
- (id)allowGroupsWithOneContactSpecifier;
- (id)allowSpecificContactsSpecifier;
- (id)allowedCommunicationGroupSpecifier;
- (id)allowedContactsGroupSpecifier;
- (id)allowedContactsSpecifiers;
- (id)communicationLimits;
- (void)dismissPresentedViewController:(id)arg1;
- (void)familyMemberContactsDidChange;
- (void)presentViewController:(id)arg1;
- (void)setAddContactsSpecifier:(id)arg1;
- (void)setAllowContactsOnlySpecifier:(id)arg1;
- (void)setAllowEveryoneSpecifier:(id)arg1;
- (void)setAllowGroupsWithOneContactSpecifier:(id)arg1;
- (void)setAllowSpecificContactsSpecifier:(id)arg1;
- (void)setAllowedCommunicationGroupSpecifier:(id)arg1;
- (void)setAllowedContactsGroupSpecifier:(id)arg1;
- (void)setAllowedContactsSpecifiers:(id)arg1;
- (void)setCommunicationLimits:(id)arg1;
- (void)setSyncingWhitelistedContacts:(bool)arg1;
- (void)setWhitelistedContactsController:(id)arg1;
- (id)specifiers;
- (bool)syncingWhitelistedContacts;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id)whitelistedContactsController;
- (void)willResignActive;

@end
