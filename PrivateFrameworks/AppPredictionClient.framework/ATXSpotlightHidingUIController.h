
@interface ATXSpotlightHidingUIController : NSObject

+ (id)normalizedIdentifier:(id)arg1;

- (id)_actionTypeButtonItemWithBundleIdentifier:(id)arg1;
- (id)_actionTypeButtonItemWithExecutableIdentifier:(id)arg1;
- (void)_addHideContextButtonItemForSearchResult:(id)arg1 toButtonItems:(id)arg2;
- (void)_addHidingPreviewButtonItemsToSearchResult:(id)arg1;
- (void)_addSwipeButtonItemToCardSection:(id)arg1 previewButtonItems:(id)arg2;
- (bool)_contextHasBeenHiddenForSearchResult:(id)arg1 adapter:(id)arg2 feedbackManager:(id)arg3;
- (id)_contextIdentifierWithPredictionReasons:(unsigned long long)arg1;
- (id)_entityButtonItemWithWithSearchEntity:(id)arg1;
- (id)_excludedFronHindingExecutableidentifiers;
- (id)_hideActionTitleWithBundleIdentifier:(id)arg1;
- (id)_hideActionTitleWithExecutableIdentifier:(id)arg1;
- (id)_hideContextActionTitleWithContextIdentifier:(id)arg1;
- (id)_hideContextButtonItemWithContextIdentifier:(id)arg1;
- (id)_hideContextButtonItemWithReasons:(unsigned long long)arg1;
- (id)_hideContextSymbolImageWithContextIdentifier:(id)arg1;
- (id)_hideWebsiteButtonItemWithIdentifier:(id)arg1;
- (id)_hidingCommandButtonItemWithIdentifier:(id)arg1 title:(id)arg2 symbolName:(id)arg3 isAction:(bool)arg4;
- (id)_hidingPreviewButtonItemsWithBundleIdentifier:(id)arg1 context:(unsigned long long)arg2;
- (id)_hidingPreviewButtonItemsWithExecutableIdentifier:(id)arg1 context:(unsigned long long)arg2;
- (id)_hidingPreviewButtonItemsWithSearchResult:(id)arg1 entity:(id)arg2;
- (id)_hidingPreviewButtonItemsWithSearchResult:(id)arg1 queryTopic:(id)arg2;
- (id)_hidingPreviewButtonItemsWithURL:(id)arg1 identifier:(id)arg2 context:(unsigned long long)arg3;
- (id)_identifierWithEntity:(id)arg1;
- (id)_identifierWithSearchResult:(id)arg1;
- (id)_identifierWithSuggestion:(id)arg1;
- (bool)_isExecutableIdentifierRecognized:(id)arg1;
- (id)_localizableKeyWithExecutableIdentifier:(id)arg1;
- (id)_localizedTitleWithQueryTopic:(id)arg1;
- (id)_nameWithNearbySuggestionIdentifier:(id)arg1;
- (id)_nearbySuggestionIdentifierWithName:(id)arg1;
- (bool)_shouldAddHidingButtonItemForContextIdentifier:(id)arg1;
- (bool)_shouldAddHidingButtonItemForExecutableIdentifier:(id)arg1;
- (id)_subMenuButtonItemWithItems:(id)arg1;
- (id)_symbolNameWithQueryTopic:(id)arg1;
- (void)addHidingPreviewButtonItemsToServerResultSections:(id)arg1;
- (bool)shouldHideSearchResult:(id)arg1;

@end
