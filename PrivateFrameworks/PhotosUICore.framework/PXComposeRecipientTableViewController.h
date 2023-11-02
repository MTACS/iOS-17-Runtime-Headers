
@interface PXComposeRecipientTableViewController : UITableViewController <CNContactViewControllerDelegate, PXChangeObserver, PXComposeRecipientDataSourceManagerDelegate, PXComposeRecipientSelectionManagerDelegate, PXComposeRecipientValidationManagerDelegate, PXPhotoRecipientViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    PXPhotoRecipientViewController * _addPeopleRecipientViewController;
    PXPhotoRecipientViewController * _bootstrapRecipientViewController;
    <PXComposeRecipientTableViewControllerDelegate> * _delegate;
    double  _footerHeight;
    UITableViewHeaderFooterView * _footerView;
    double  _headerHeight;
    NSIndexPath * _indexPathForBootstrapping;
    <PXPersonSuggestion> * _personSuggestionForBootstrapping;
    PXComposeRecipientSelectionManager * _selectionManager;
    double  _tableViewHeight;
    PXComposeRecipientValidationManager * _validationManager;
    PXComposeRecipientTableViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXComposeRecipientTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerHeight;
@property (nonatomic, retain) PXComposeRecipientSelectionManager *selectionManager;
@property (readonly) Class superclass;
@property (nonatomic) double tableViewHeight;
@property (nonatomic, retain) PXComposeRecipientValidationManager *validationManager;
@property (nonatomic, retain) PXComposeRecipientTableViewModel *viewModel;

+ (id)contactViewControllerToPresentForRecipientViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_contactViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_dismissRecipientViewController:(id)arg1;
- (id)_footerView;
- (void)_handleAddRecipient:(id)arg1;
- (id)_tableView:(id)arg1 participantCellForRowAtIndexPath:(id)arg2;
- (bool)_updateFooterHeight;
- (bool)_updateHeaderHeight;
- (bool)_updateRowHeight;
- (void)bootstrapPersonSuggestion:(id)arg1 withContact:(id)arg2;
- (id)cellModelAtIndex:(unsigned long long)arg1;
- (void)composeRecipientDataSourceManager:(id)arg1 didUpdateDataSourceWithChangeDetails:(id)arg2;
- (void)composeRecipientSelectionManager:(id)arg1 didUpdateSelectionSnapshotWithChangeDetails:(id)arg2;
- (void)composeRecipientValidationManager:(id)arg1 didUpdateValidationWithChangedIndexes:(id)arg2;
- (void)configureCellModel:(id)arg1 withComposeRecipient:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)delegate;
- (double)footerHeight;
- (double)headerHeight;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithViewModel:(id)arg1;
- (bool)isValidAddressForComposeRecipient:(id)arg1;
- (void)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoRecipientViewController:(id)arg1 didCompleteWithRecipients:(id)arg2;
- (void)photoRecipientViewControllerDidCancel:(id)arg1;
- (id)selectionManager;
- (void)setDelegate:(id)arg1;
- (void)setFooterHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setTableViewHeight:(double)arg1;
- (void)setValidationManager:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableViewHeight;
- (void)updateTableViewHeight;
- (id)validationManager;
- (id)viewModel;
- (void)viewWillLayoutSubviews;

@end
