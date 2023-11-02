
@interface SUUIIPadSearchController : NSObject <SUUISearchFieldDelegate> {
    SUUIClientContext * _clientContext;
    UIViewController * _parentViewController;
    SUUISearchFieldController * _searchFieldController;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *parentViewController;
@property (nonatomic, readonly) SUUISearchFieldController *searchFieldController;
@property (readonly) Class superclass;

+ (id)lastSearchTerm;
+ (void)setLastSearchTerm:(id)arg1;

- (void).cxx_destruct;
- (id)_searchFieldController;
- (void)_termDidChangeNotification:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;
- (id)newSearchFieldBarItem;
- (id)parentViewController;
- (void)reloadSearchField;
- (id)searchFieldController;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)setSearchFieldPlaceholderText:(id)arg1;
- (void)setSearchFieldText:(id)arg1;

@end
