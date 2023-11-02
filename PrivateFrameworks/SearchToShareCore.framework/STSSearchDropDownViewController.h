
@interface STSSearchDropDownViewController : UIViewController <PopUpLegalDelegate, PopUpPresentationDelegate, STSCategorySelectionDelegate, STSKeyCommandDelegate, STSSearchModelUpdateDelegate, STSSuggestionSelectionDelegate> {
    CategoriesDataSource * _categoriesDataSource;
    NSString * _currentQuery;
    <STSSearchDropDownViewControllerDelegate> * _delegate;
    bool  _didSendCategoryResultFeedback;
    <PopUpSearchViewDelegate> * _locationDelegate;
    <PopUpPlugin> * _popUpPlugin;
    unsigned long long  _popUpShowing;
    NSString * _query;
    NSString * _sceneIdentifier;
    STSSearchModel * _searchModel;
    bool  _sendFeedbackOnViewDidAppear;
    SuggestionsDataSource * _suggestionsDataSource;
}

@property (nonatomic, retain) CategoriesDataSource *categoriesDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STSSearchDropDownViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PopUpSearchViewDelegate> *locationDelegate;
@property (nonatomic, retain) <PopUpPlugin> *popUpPlugin;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (nonatomic, readonly) STSSearchModel *searchModel;
@property (nonatomic) bool sendFeedbackOnViewDidAppear;
@property (nonatomic, retain) SuggestionsDataSource *suggestionsDataSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) STSDropDownRootView *view;

- (void).cxx_destruct;
- (void)_showLegalNotice;
- (void)_updateSuggestions;
- (id)categoriesDataSource;
- (void)categoryViewController:(id)arg1 didSelectCategory:(id)arg2 suggested:(bool)arg3;
- (void)categoryViewController:(id)arg1 didSelectRecent:(id)arg2;
- (void)categoryViewControllerDidSelectClearRecentsButton:(id)arg1;
- (void)clearRecents;
- (void)close;
- (id)delegate;
- (void)didCloseDropDown;
- (void)didPressDownKey;
- (void)didPressReturnKey:(id)arg1;
- (void)didPressUpKey;
- (void)didRequestClose;
- (void)dropDownContentViewControllerShouldDismiss;
- (id)initWithSearchModel:(id)arg1;
- (id)locationDelegate;
- (id)popUpPlugin;
- (id)query;
- (id)sceneIdentifier;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchModel;
- (void)searchModelUpdated;
- (void)searchModelUpdatedQuerySuggestions:(id)arg1;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg1;
- (bool)sendFeedbackOnViewDidAppear;
- (void)sendVisibleResultsFeedback;
- (void)setCategoriesDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationDelegate:(id)arg1;
- (void)setPopUpPlugin:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSendFeedbackOnViewDidAppear:(bool)arg1;
- (void)setSuggestionsDataSource:(id)arg1;
- (bool)shouldShowLegalNotice;
- (void)showCategories;
- (void)showPickerAndPerformQuery:(id)arg1 requestType:(long long)arg2;
- (void)showSuggestions;
- (void)showSuggestionsIfNeccessary;
- (void)suggestionViewController:(id)arg1 didSelectSuggestion:(id)arg2 suggested:(bool)arg3;
- (id)suggestionsDataSource;

@end
