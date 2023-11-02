
@interface CNAutocompleteResultsViewController : UIViewController {
    unsigned long long  _mode;
    NSArray * _recipients;
    CNAutocompleteResultsTableViewController * _resultsTableController;
    bool  _showsSuggestions;
}

@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) CNAutocompleteResultsTableViewController *resultsTableController;
@property (nonatomic) bool showsSuggestions;

- (void).cxx_destruct;
- (bool)collapseSelectedRecipient;
- (bool)commitSelectionOfRecipient;
- (bool)expandSelectedRecipient;
- (id)initWithMode:(unsigned long long)arg1;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (unsigned long long)mode;
- (id)recipients;
- (void)removeRecipient:(id)arg1;
- (id)resultsTableController;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)setRecipients:(id)arg1;
- (void)setResultsTableController:(id)arg1;
- (void)setShowsSuggestions:(bool)arg1;
- (bool)showsSuggestions;
- (void)viewDidLoad;

@end
