
@interface ATXHomeScreenLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    NSMutableDictionary * _appPanelIdToLayoutDictionary;
    NSUUID * _cacheUpdateUUID;
    CHSProactiveService * _chronoService;
    NSUserDefaults * _defaults;
    NSSet * _dismissedSuggestionsForAppPanels;
    NSSet * _dismissedSuggestionsForSGWidget;
    ATXEngagementRecordManager * _engagementRecordManager;
    NSArray * _homeScreenPageConfigs;
    ATXBlendingLayerHyperParameters * _hyperParameters;
    bool  _isiPad;
    ATXSuggestionModeFilter * _modeFilter;
    ATXHomeScreenCachedSuggestions * _previousHSCache;
    NSArray * _rankedSuggestions;
    NSMutableDictionary * _sgWidgetIdToLayoutDictionary;
    NSMutableDictionary * _stackIdToLayoutDictionary;
    ATXStackStateTracker * _stackStateTracker;
    ATXInformationStore * _store;
    <ATXSuggestionDeduplicatorProtocol> * _suggestionDeduplicator;
    NSMutableArray * _suggestionsAssignedAsNPlusOne;
    bool  _suggestionsWidgetsShouldBeDisjointOnAPage;
    ATXWidgetSuggestionDismissManager * _widgetDismissManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sgWidgetsInStack:(id)arg1;

- (void).cxx_destruct;
- (id)appPredictionSuggestionsFromSuggestions:(id)arg1;
- (bool)canPlaceSGWidgetOnTopOfStack:(id)arg1 pageState:(id)arg2;
- (bool)canPlaceWidgetSuggestion:(id)arg1 onTopOfStack:(id)arg2 pageState:(id)arg3 widgetExistsInStack:(bool*)arg4;
- (id)fallbackCandidatesGivenSelectedCandidates;
- (id)freshPageStateWithPageConfig:(id)arg1;
- (id)generateLayoutsWithSuggestions:(id)arg1 consumerSubType:(unsigned char)arg2 stackLayoutSize:(unsigned long long)arg3;
- (id)homeScreenPageConfigs;
- (id)init;
- (id)initWithBlendingLayerHyperParameters:(id)arg1 suggestionsWidgetsShouldBeDisjointOnAPage:(bool)arg2;
- (id)initWithBlendingLayerHyperParameters:(id)arg1 suggestionsWidgetsShouldBeDisjointOnAPage:(bool)arg2 suggestionDeduplicator:(id)arg3 engagementRecordManager:(id)arg4 widgetDismissManager:(id)arg5 stackStateTracker:(id)arg6 store:(id)arg7 defaults:(id)arg8 modeFilter:(id)arg9 chronoService:(id)arg10 isiPad:(bool)arg11;
- (id)regenerateLowConfidenceStackRotationForPreviouslyStaleStackIfNeeded:(id)arg1 stackConfig:(id)arg2;
- (void)removeEngagedWidgetSuggestionsIfApplicableForSuggestions:(id)arg1 stackIsStale:(bool)arg2 stackConfig:(id)arg3;
- (void)removeSuggestionsWithInferredEngagementIfApplicableFromIndices:(id)arg1 validSuggestions:(id)arg2;
- (void)removeWidgetAlreadyOnTopOfStackFromValidSuggestionsForStalenessRotationIfPossible:(id)arg1 stackConfig:(id)arg2;
- (id)reorderedSuggestionsBasedOnPreviousLayouts:(id)arg1 panelIndex:(unsigned long long)arg2 pageState:(id)arg3;
- (id)selectedLayoutForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;
- (id)selectedLayouts;
- (void)setLayoutForAppPanelWithConfig:(id)arg1 panelIndex:(unsigned long long)arg2 pageState:(id)arg3;
- (void)setLayoutForTopOfStackWithConfig:(id)arg1 pageState:(id)arg2;
- (void)setLayoutForUnfilledSGWidget:(id)arg1 pageState:(id)arg2;
- (void)setLayoutsForAddWidgetUI;
- (void)setLayoutsForPinnedSGWidgetsOnPage:(id)arg1;
- (void)setLayoutsForSuggestionsWidgetsInStack:(id)arg1 selectedLayout:(id)arg2;
- (bool)stackIsPinnedSGWidget:(id)arg1;
- (bool)stackIsStale:(id)arg1;
- (bool)suggestionLayoutIsValidForTopOfStack:(id)arg1 stackConfig:(id)arg2 pageConfig:(id)arg3 stackIsStale:(bool)arg4;
- (void)trackUnfilledSGWidgetsInStack:(id)arg1 pageState:(id)arg2;
- (id)validCandidateSuggestionsForAppPanel:(id)arg1 panelIndex:(unsigned long long)arg2 pageState:(id)arg3;
- (id)validCandidateSuggestionsForTopOfStack:(id)arg1 pageState:(id)arg2 stackIsStale:(bool)arg3;
- (id)validCandidateSuggestionsForUnfilledSGWidgetWithPageState:(id)arg1;

@end
