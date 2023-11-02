
@interface SKUIGiftContactSearchController : NSObject <CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer> {
    NSMutableArray * _autocompleteSearchResults;
    <SKUIGiftContactSearchDelegate> * _delegate;
    NSArray * _results;
    CNAutocompleteSearchManager * _searchManager;
    UIView * _searchResultsView;
    CNAutocompleteResultsTableViewController * _searchResultsViewController;
    NSNumber * _searchTaskIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIGiftContactSearchDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfResults;
@property (nonatomic, readonly) UIView *searchResultsView;
@property (nonatomic, readonly) CNAutocompleteResultsTableViewController *searchResultsViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishSearchWithResults:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)finishedSearchingForAutocompleteResults;
- (long long)numberOfResults;
- (void)resetSearch;
- (void)searchForText:(id)arg1;
- (id)searchResultsView;
- (id)searchResultsViewController;
- (void)setDelegate:(id)arg1;

@end
