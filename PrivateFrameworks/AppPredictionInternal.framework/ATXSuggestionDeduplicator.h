
@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    NSDictionary * _visibleAppsByPage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithVisibleAppsByPage:(id)arg1;
- (bool)_isContactsWidgetIntent:(id)arg1 overlappingContactsWithOtherContactsWidgetIntent:(id)arg2;
- (bool)_isWidget:(id)arg1 showingContentOfAction:(id)arg2;
- (bool)_isWidget:(id)arg1 showingContentOfInfoSuggestion:(id)arg2;
- (id)duplicateWidgetForWidgetSuggestion:(id)arg1 otherWidgets:(id)arg2;
- (id)executableClassStringsToUnarchiveDuringComparison;
- (bool)executableSpecsAreDuplicates:(id)arg1 otherExecutableSpec:(id)arg2;
- (id)init;
- (bool)isWidget:(id)arg1 showingIdenticalContentOfSuggestion:(id)arg2;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 shouldStopAfterFindingFirstOne:(bool)arg4;
- (id)stacksToConsiderForLeftOfHomeForStackId:(id)arg1 stacksOnPage:(id)arg2;
- (id)stacksWithDuplicateWidgetExtensionId:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (id)stacksWithDuplicateWidgetSuggestion:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)suggestionIsDuplicate:(id)arg1 appsOnHomeScreenPageAtIndex:(unsigned long long)arg2;
- (bool)suggestionIsDuplicate:(id)arg1 existingSuggestions:(id)arg2;
- (bool)suggestionIsDuplicate:(id)arg1 existingSuggestions:(id)arg2 shouldCompareAcrossTypes:(bool)arg3;
- (bool)suggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2;
- (bool)suggestionIsDuplicate:(id)arg1 otherApps:(id)arg2;
- (bool)suggestionIsDuplicateAppOrWidget:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)suggestionsAreDuplicateActionAndLinkAction:(id)arg1 otherSuggestion:(id)arg2;
- (bool)suggestionsAreDuplicateAppAndAction:(id)arg1 otherSuggestion:(id)arg2;
- (bool)suggestionsAreDuplicateAppAndLinkAction:(id)arg1 otherSuggestion:(id)arg2;
- (bool)suggestionsAreDuplicateWidgetAndAction:(id)arg1 otherSuggestion:(id)arg2;
- (bool)widgetExtensionIdIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)widgetExtensionIdIsPinned:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)widgetSuggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3;
- (bool)widgetSuggestionIsPinned:(id)arg1 homeScreenPage:(id)arg2 excludingStackConfigId:(id)arg3;

@end
