
@interface STCommunicationLimitsListController : STPINListViewController <CNUIFamilyMemberContactsPresentation> {
    PSSpecifier * _allowContactEditingSpecifier;
    STCommunicationLimits * _communicationLimits;
    PSSpecifier * _duringDowntimeSpecifier;
    PSSpecifier * _duringScreenTimeSpecifier;
    CNUIFamilyMemberContactsController * _familyMemberContactsController;
    PSSpecifier * _iCloudContactsSpecifier;
    PSSpecifier * _manageContactsGroupSpecifier;
    PSSpecifier * _manageContactsSpecifier;
    bool  _syncingiCloudContacts;
}

@property (retain) PSSpecifier *allowContactEditingSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PSSpecifier *duringDowntimeSpecifier;
@property (retain) PSSpecifier *duringScreenTimeSpecifier;
@property (retain) CNUIFamilyMemberContactsController *familyMemberContactsController;
@property (readonly) unsigned long long hash;
@property (retain) PSSpecifier *iCloudContactsSpecifier;
@property (retain) PSSpecifier *manageContactsGroupSpecifier;
@property (retain) PSSpecifier *manageContactsSpecifier;
@property (readonly) Class superclass;
@property bool syncingiCloudContacts;

- (void).cxx_destruct;
- (id)_allowContactEditing:(id)arg1;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_didCancelSyncingiCloudContacts;
- (void)_didFinishSyncingiCloudContacts;
- (void)_didStartSyncingiCloudContacts;
- (void)_enableAllowContactEditingSwitch:(bool)arg1;
- (void)_indicateiCloudContactsSyncingStatus;
- (id)_manageContacts:(id)arg1;
- (id)_manageContactsGroupFooterText;
- (void)_setAllowContactEditing:(id)arg1 specifier:(id)arg2;
- (void)_setManageContacts:(id)arg1 specifier:(id)arg2;
- (void)_startSyncingiCloudContacts;
- (id)_statusPendingDetailText:(id)arg1;
- (id)_totaliCloudContactsDetailText:(id)arg1;
- (void)_updateAllowContactEditing:(id)arg1;
- (void)_updateAllowContactEditingWithAlertIfNeeded:(id)arg1 forSpecifier:(id)arg2;
- (void)_updateManageContactsGroupFooterView;
- (id)allowContactEditingSpecifier;
- (id)communicationLimits;
- (void)dealloc;
- (void)dismissPresentedViewController:(id)arg1;
- (id)duringDowntimeSpecifier;
- (id)duringScreenTimeSpecifier;
- (id)familyMemberContactsController;
- (void)familyMemberContactsDidChange;
- (id)iCloudContactsSpecifier;
- (id)initWithRootViewModelCoordinator:(id)arg1;
- (id)manageContactsGroupSpecifier;
- (id)manageContactsSpecifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentViewController:(id)arg1;
- (void)setAllowContactEditingSpecifier:(id)arg1;
- (void)setCommunicationLimits:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDuringDowntimeSpecifier:(id)arg1;
- (void)setDuringScreenTimeSpecifier:(id)arg1;
- (void)setFamilyMemberContactsController:(id)arg1;
- (void)setICloudContactsSpecifier:(id)arg1;
- (void)setManageContactsGroupSpecifier:(id)arg1;
- (void)setManageContactsSpecifier:(id)arg1;
- (void)setSyncingiCloudContacts:(bool)arg1;
- (id)specifiers;
- (bool)syncingiCloudContacts;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
