
@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactPickerDelegate, CNContactViewControllerPrivateDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUICoreFamilyMemberContactsObserver, CNUIFamilyMemberDowntimeContactPickerControllerDelegate> {
    CNContactFormatter * _contactCardWarningFormatter;
    <CNUICoreContactManagementConsentCheck> * _contactManagentConsentCheck;
    CNContactViewController * _contactViewControllerPresentingItemDetails;
    <CNUICoreFamilyMemberWhitelistedContactsDataSource> * _dataSource;
    <CNUIFamilyMemberWhitelistedContactsControllerDelegate> * _delegate;
    <CNDowntimeWhitelistContainerFetching> * _downtimeContaienerFetcher;
    FAFamilyMember * _familyMember;
    <CNUIFamilyMemberContactsPresentation> * _familyMemberContactsPresentation;
    CNContactStore * _familyMemberScopedContactStore;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNContactFormatter *contactCardWarningFormatter;
@property (nonatomic, readonly) <CNUICoreContactManagementConsentCheck> *contactManagentConsentCheck;
@property (nonatomic) CNContactViewController *contactViewControllerPresentingItemDetails;
@property (nonatomic, readonly) <CNUICoreFamilyMemberWhitelistedContactsDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIFamilyMemberWhitelistedContactsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNDowntimeWhitelistContainerFetching> *downtimeContaienerFetcher;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) NSArray *familyMemberContactItems;
@property (nonatomic, readonly) <CNUIFamilyMemberContactsPresentation> *familyMemberContactsPresentation;
@property (nonatomic, readonly) CNContactStore *familyMemberScopedContactStore;
@property (nonatomic, readonly) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)contactPickerWithDelegate:(id)arg1 familyMember:(id)arg2 parentContainer:(id)arg3;

- (void).cxx_destruct;
- (void)addContactsToWhitelist:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg1;
- (id)anchorViewForDefaultInteraction;
- (void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg1;
- (id)contactCardWarningFormatter;
- (bool)contactManagementEnabled;
- (id)contactManagentConsentCheck;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg1;
- (id)contactViewControllerPresentingItemDetails;
- (id)dataSource;
- (id)delegate;
- (void)deleteFamilyMemberContactItem:(id)arg1;
- (id)downtimeContaienerFetcher;
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)familyMember;
- (id)familyMemberContactItems;
- (void)familyMemberContactItemsDidChange;
- (id)familyMemberContactsPresentation;
- (id)familyMemberScopedContactStore;
- (long long)fetchStatus;
- (id)generateContactSourceOptionSheet;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;
- (void)performAddFromFamilyMemberContacts;
- (void)performAddFromMainContacts;
- (void)performAddFromMainContactsForFamilyMember;
- (void)performAddFromMainContactsForThisDevice;
- (void)performAddNewContact;
- (void)performDefaultInteraction;
- (void)performInteraction:(long long)arg1;
- (void)presentDetailsOfFamilyMemberContactItem:(id)arg1;
- (id)schedulerProvider;
- (void)setContactViewControllerPresentingItemDetails:(id)arg1;
- (void)setDelegate:(id)arg1;
- (long long)status;
- (id)warningMessageForContact:(id)arg1;

@end
