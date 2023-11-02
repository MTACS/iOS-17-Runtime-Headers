
@interface PKAddressSearcherViewController : UIViewController <PKAddressEditorViewControllerDelegate, PKAddressSearchModelDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _completionSearchResults;
    PKContactFormatValidator * _contactFormatValidator;
    NSArray * _contactsSearchResults;
    <PKAddressSearcherViewControllerDelegate> * _delegate;
    _UINavigationControllerPalette * _palette;
    NSArray * _requiredKeys;
    UISearchBar * _searchBar;
    PKAddressSearchModel * _searchModel;
    CNPostalAddress * _selectedAddress;
    long long  _style;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSArray *completionSearchResults;
@property (nonatomic, retain) PKContactFormatValidator *contactFormatValidator;
@property (nonatomic, retain) NSArray *contactsSearchResults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddressSearcherViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UINavigationControllerPalette *palette;
@property (nonatomic, retain) NSArray *requiredKeys;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, retain) PKAddressSearchModel *searchModel;
@property (nonatomic, retain) CNPostalAddress *selectedAddress;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_showAddressEditorWithContact:(id)arg1 withContactErrors:(id)arg2;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (id)completionSearchResults;
- (id)contactFormatValidator;
- (id)contactsSearchResults;
- (void)contactsSearchUpdated:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (void)mapSearchUpdated:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)palette;
- (id)requiredKeys;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)searchModel;
- (id)selectedAddress;
- (void)selectedAddress:(id)arg1 withError:(id)arg2;
- (void)setCompletionSearchResults:(id)arg1;
- (void)setContactFormatValidator:(id)arg1;
- (void)setContactsSearchResults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPalette:(id)arg1;
- (void)setRequiredKeys:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchModel:(id)arg1;
- (void)setSelectedAddress:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTableView:(id)arg1;
- (long long)style;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
