
@interface CNContactShareContactAction : CNContactAction <CNContactCardFieldPickerDelegate, UIActivityViewControllerObjectManipulationDelegate> {
    UIActivityViewController * _activityViewController;
    CNContactCardFieldPicker * _fieldPicker;
    CNContact * _filteredContact;
    UIView * _sourceView;
}

@property (nonatomic, retain) UIActivityViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactCardFieldPicker *fieldPicker;
@property (nonatomic, retain) CNContact *filteredContact;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_customizationAvailableForActivityViewController:(id)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (id)activityItemForContact:(id)arg1;
- (id)activityViewController;
- (bool)canPerformAction;
- (void)contactCardFieldPicker:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)customActionViewControllerForActivityViewController:(id)arg1;
- (id)customLocalizedActionTitleForActivityViewController:(id)arg1;
- (id)fieldPicker;
- (id)filteredContact;
- (void)performActionWithSender:(id)arg1;
- (void)presentFilterFieldPicker;
- (void)presentShareSheet;
- (void)setActivityViewController:(id)arg1;
- (void)setFieldPicker:(id)arg1;
- (void)setFilteredContact:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setupForContactFieldPicker;
- (id)sourceView;

@end
