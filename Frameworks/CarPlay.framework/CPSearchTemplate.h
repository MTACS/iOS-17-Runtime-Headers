
@interface CPSearchTemplate : CPTemplate <CPSearchClientTemplateDelegate> {
    <CPSearchTemplateDelegate> * _delegate;
    NSArray * _listItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSearchTemplateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *listItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;

- (void).cxx_destruct;
- (id)delegate;
- (id)leadingNavigationBarButtons;
- (id)listItems;
- (void)searchTemplateSearchButtonPressedWithIdentifier:(id)arg1;
- (void)searchTemplateWithIdentifier:(id)arg1 selectedResultWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)searchTemplateWithIdentifier:(id)arg1 updateSearchResultsForSearchText:(id)arg2 completionResults:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setListItems:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;

@end
