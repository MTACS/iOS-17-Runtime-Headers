
@interface CNUIFamilyMemberContactsController : NSObject <CNContactPickerPrivateDelegate, CNContactViewControllerDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUICoreFamilyMemberContactsObserver, CNUIFamilyMemberDowntimeContactPickerControllerDelegate> {
    CNContactPickerViewController * _contactPickerViewController;
    <CNUICoreFamilyMemberContactsDataSource> * _dataSource;
    <CNUIFamilyMemberContactsControllerDelegate> * _delegate;
    FAFamilyMember * _familyMember;
    <CNUIFamilyMemberContactsPresentation> * _familyMemberContactsPresentation;
    CNContactStore * _familyMemberScopedContactStore;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic) CNContactPickerViewController *contactPickerViewController;
@property (nonatomic, readonly) long long countOfFamilyMemberContacts;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIFamilyMemberContactsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) <CNUIFamilyMemberContactsPresentation> *familyMemberContactsPresentation;
@property (nonatomic, readonly) CNContactStore *familyMemberScopedContactStore;
@property (nonatomic, readonly) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (bool)isViewController:(id)arg1 presentedByContactPicker:(id)arg2;

- (void).cxx_destruct;
- (void)addContactsOptionsSheetViewControllerDidCancel:(id)arg1;
- (void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)arg1;
- (void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)arg1;
- (id)anchorViewForAddContactsInteraction;
- (void)cancelPresentationOfViewController:(id)arg1;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactPickerViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (long long)countOfFamilyMemberContacts;
- (id)dataSource;
- (id)delegate;
- (void)dismissPresentedViewController:(id)arg1;
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)familyMember;
- (void)familyMemberContactItemsDidChange;
- (id)familyMemberContactsPresentation;
- (id)familyMemberScopedContactStore;
- (long long)fetchStatus;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;
- (void)performAddContactsInteraction;
- (void)performAddFromMainContactsInteraction;
- (void)performDefaultInteraction;
- (void)performDisplayContactsInteraction;
- (void)performInteraction:(long long)arg1;
- (void)pickerDidSelectAddNewContact:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)schedulerProvider;
- (void)setContactPickerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
