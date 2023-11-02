
@interface ATXHomeScreenSuggestionClientGuardedData : NSObject {
    NSMutableDictionary * appPanelIdentifierToPageIndex;
    NSDictionary * currentAppPredictionPanelLayouts;
    NSString * currentBlendingCacheId;
    NSMutableArray * currentFallbacks;
    NSDictionary * currentStackSuggestions;
    NSDictionary * currentSuggestionWidgetLayouts;
    bool  isUserInteractingWithProactiveWidget;
    NSSet * knownHomeScreenProactiveWidgetUniqueIdsAtTimeOfBlending;
    NSSet * knownTodayPageProactiveWidgetUniqueIdsAtTimeOfBlending;
    NSObject<OS_dispatch_source> * layoutUpdateSuppressionTimer;
    ATXHomeScreenEventLogger * logger;
    NSHashTable * observers;
    NSMutableDictionary * pagesToUsedFallbackAppSuggestions;
    NSDictionary * previousSuggestedSuggestionWidgetLayouts;
    NSObject<OS_dispatch_source> * rotationSuppressionTimer;
    bool  shouldUpdateKnownHomeScreenWidgetUniqueIdsAtTimeOfBlending;
    bool  shouldUpdateKnownTodayPageWidgetUniqueIdsAtTimeOfBlending;
    NSMutableArray * stacksAffectedByDebugRotation;
    NSSet * stagedDockAppList;
    NSArray * stagedHomeScreenPageConfigurations;
    NSArray * stagedTodayPagePanels;
    NSArray * stagedTodayPageStacks;
    ATXInformationStore * store;
    ATXHomeScreenCachedSuggestions * suppressedSuggestions;
    ATXWidgetSuggestionDismissManager * widgetDismissManager;
}

- (void).cxx_destruct;

@end
