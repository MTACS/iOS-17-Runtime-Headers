
@interface PXSearchRecipientController : NSObject <CNAutocompleteResultsTableViewControllerDelegate, PXSectionedDataSourceManagerObserver> {
    CNContactViewController * __contactViewController;
    PXRecipientSearchDataSource * __searchDataSource;
    CNAutocompleteResultsTableViewController * __searchResultsTableViewController;
    <PXSearchRecipientControllerDelegate> * _delegate;
    struct { 
        bool didSelectRecipient; 
        bool searchStateDidChange; 
        bool numberOfSearchRecipientsDidChange; 
    }  _delegateRespondsTo;
    unsigned long long  _numberOfSearchRecipients;
    PXRecipientSearchDataSourceManager * _searchDataSourceManager;
    long long  _searchState;
    CNComposeRecipient * _suggestedRecipientBeingViewed;
}

@property (nonatomic) CNContactViewController *_contactViewController;
@property (setter=_setSearchDataSource:, nonatomic, retain) PXRecipientSearchDataSource *_searchDataSource;
@property (nonatomic, readonly) bool _searchHasNoResultsFound;
@property (nonatomic, readonly) CNAutocompleteResultsTableViewController *_searchResultsTableViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSearchRecipientControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfSearchRecipients;
@property (nonatomic, readonly) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (nonatomic, readonly) UIView *searchResultsView;
@property (nonatomic) long long searchState;
@property (nonatomic, retain) CNComposeRecipient *suggestedRecipientBeingViewed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactViewController;
- (id)_contactViewControllerForRecipient:(id)arg1;
- (void)_removeRecent;
- (id)_searchDataSource;
- (bool)_searchHasNoResultsFound;
- (id)_searchResultsTableViewController;
- (void)_setSearchDataSource:(id)arg1;
- (id)_validationTextColorForSearchResult:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)disambiguateRecipient:(id)arg1;
- (id)initWithSearchDataSourceManager:(id)arg1;
- (unsigned long long)numberOfSearchRecipients;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)searchDataSourceManager;
- (id)searchResultsView;
- (long long)searchState;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfSearchRecipients:(unsigned long long)arg1;
- (void)setSearchState:(long long)arg1;
- (void)setSuggestedRecipientBeingViewed:(id)arg1;
- (void)set_contactViewController:(id)arg1;
- (id)suggestedRecipientBeingViewed;

@end
