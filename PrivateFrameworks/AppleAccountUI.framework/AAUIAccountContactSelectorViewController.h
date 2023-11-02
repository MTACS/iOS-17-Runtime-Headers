
@interface AAUIAccountContactSelectorViewController : AAUIOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * _continueButton;
    AAUIProfilePictureStore * _pictureStore;
    AALocalContactInfo * _selectedContact;
    NSArray * _suggestedContacts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIAccountContactSelectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isOtherContactRowForIndexPath:(id)arg1;
- (id)_otherContactCellForTableView:(id)arg1;
- (id)_pictureStore;
- (void)_selectContact;
- (void)_setupTableView;
- (id)_suggestedContactCellForTableView:(id)arg1 atRow:(long long)arg2;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
