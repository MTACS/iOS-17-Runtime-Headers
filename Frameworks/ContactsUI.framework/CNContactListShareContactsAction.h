
@interface CNContactListShareContactsAction : NSObject <CNContactCardFieldPickerDelegate, CNContactListAction, UIActivityViewControllerObjectManipulationDelegate> {
    UIActivityViewController * _activityViewController;
    NSArray * _contacts;
    CNContactListShareContactsActionContext * _context;
    <CNContactListActionDelegate> * _delegate;
    CNContactCardFieldPicker * _fieldPicker;
    NSArray * _filteredContacts;
    UIView * _sourceView;
}

@property (nonatomic, retain) UIActivityViewController *activityViewController;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, readonly) CNContactListShareContactsActionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactCardFieldPicker *fieldPicker;
@property (nonatomic, retain) NSArray *filteredContacts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)_customizationAvailableForActivityViewController:(id)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (id)activityItemForContacts:(id)arg1;
- (id)activityViewController;
- (void)contactCardFieldPicker:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)contacts;
- (id)context;
- (id)customActionViewControllerForActivityViewController:(id)arg1;
- (id)customLocalizedActionTitleForActivityViewController:(id)arg1;
- (id)delegate;
- (bool)editRequiresAuthorization;
- (id)fieldPicker;
- (id)filteredContacts;
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2;
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2 context:(id)arg3;
- (void)performAction;
- (void)presentFilterFieldPicker;
- (void)presentShareSheet;
- (void)setActivityViewController:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFieldPicker:(id)arg1;
- (void)setFilteredContacts:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setupForContactFieldPicker;
- (bool)shouldReloadListOnCompletion;
- (id)sourceView;

@end
