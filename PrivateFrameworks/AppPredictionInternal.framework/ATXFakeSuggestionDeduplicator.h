
@interface ATXFakeSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    NSSet * _appsOnPage;
    bool  _blanketReturnValue;
    bool  _blanketValueIsSet;
    ATXHomeScreenWidgetIdentifiable * _duplicateWidgetReturnValue;
    bool  _duplicateWidgetReturnValueIsSet;
    bool  _existingSuggestionsReturnValue;
    bool  _existingSuggestionsReturnValueIsSet;
    bool  _homeScreenPageReturnValue;
    bool  _homeScreenPageReturnValueIsSet;
    NSArray * _pinnedWidgetSuggestions;
    NSArray * _suggestionsInRecentlyEngagedCache;
}

@property (nonatomic, retain) NSSet *appsOnPage;
@property (nonatomic) bool blanketReturnValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ATXHomeScreenWidgetIdentifiable *duplicateWidgetReturnValue;
@property (nonatomic) bool existingSuggestionsReturnValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeScreenPageReturnValue;
@property (nonatomic, retain) NSArray *pinnedWidgetSuggestions;
@property (nonatomic, retain) NSArray *suggestionsInRecentlyEngagedCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appsOnPage;
- (bool)blanketReturnValue;
- (id)duplicateWidgetForWidgetSuggestion:(id)arg1 otherWidgets:(id)arg2;
- (id)duplicateWidgetReturnValue;
- (bool)existingSuggestionsReturnValue;
- (bool)homeScreenPageReturnValue;
- (id)init;
- (bool)isWidget:(id)arg1 showingIdenticalContentOfSuggestion:(id)arg2;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 shouldStopAfterFindingFirstOne:(bool)arg4;
- (id)pinnedWidgetSuggestions;
- (void)setAppsOnPage:(id)arg1;
- (void)setBlanketReturnValue:(bool)arg1;
- (void)setDuplicateWidgetReturnValue:(id)arg1;
- (void)setExistingSuggestionsReturnValue:(bool)arg1;
- (void)setHomeScreenPageReturnValue:(bool)arg1;
- (void)setPinnedWidgetSuggestions:(id)arg1;
- (void)setSuggestionsInRecentlyEngagedCache:(id)arg1;
- (bool)suggestionIsDuplicate:(id)arg1 appsOnHomeScreenPageAtIndex:(unsigned long long)arg2;
- (bool)suggestionIsDuplicate:(id)arg1 existingSuggestions:(id)arg2;
- (bool)suggestionIsDuplicate:(id)arg1 existingSuggestions:(id)arg2 shouldCompareAcrossTypes:(bool)arg3;
- (bool)suggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2;
- (bool)suggestionIsDuplicate:(id)arg1 otherApps:(id)arg2;
- (bool)suggestionIsDuplicateAppOrWidget:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (id)suggestionsInRecentlyEngagedCache;
- (bool)widgetExtensionIdIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)widgetExtensionIdIsPinned:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)widgetSuggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)widgetSuggestionIsPinned:(id)arg1 homeScreenPage:(id)arg2 excludingStackConfigId:(id)arg3;

@end
