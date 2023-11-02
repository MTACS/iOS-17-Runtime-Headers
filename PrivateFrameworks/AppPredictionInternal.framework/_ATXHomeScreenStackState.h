
@interface _ATXHomeScreenStackState : NSObject {
    ATXHomeScreenStackConfig * _config;
    ATXBlendingLayerHyperParameters * _hyperParameters;
    _ATXHomeScreenPageState * _page;
    NSMutableArray * _previousSuggestedWidgets;
    <_ATXWidgetSuggesting> * _previousTopOfStackSuggestion;
    ATXStackStateTracker * _stackStateTracker;
    NSMutableArray * _suggestedWidgets;
    <ATXSuggestionDeduplicatorProtocol> * _suggestionDeduplicator;
    NSMutableDictionary * _suggestionsWidgetSuggestionsByWidgetUniqueId;
    <_ATXWidgetSuggesting> * _topOfStackSuggestion;
}

@property (nonatomic, readonly) ATXHomeScreenStackConfig *config;
@property (nonatomic, readonly) _ATXHomeScreenPageState *page;
@property (nonatomic, readonly) NSArray *previousSuggestedWidgets;
@property (nonatomic, readonly) <_ATXWidgetSuggesting> *previousTopOfStackSuggestion;
@property (nonatomic, readonly) NSMutableArray *suggestedWidgets;
@property (nonatomic, readonly) NSMutableDictionary *suggestionsWidgetSuggestionsByWidgetUniqueId;
@property (nonatomic, retain) <_ATXWidgetSuggesting> *topOfStackSuggestion;

- (void).cxx_destruct;
- (id)_firstWidgetPassingTest:(id /* block */)arg1 considerSuggestedWidgets:(bool)arg2;
- (id)_previousSuggestionForMemberWidget:(id)arg1;
- (id)config;
- (bool)containsIdenticalContentOfSuggestion:(id)arg1 ignoreDuplicatesInSGWidget:(bool)arg2 ignoreDuplicatesInPanels:(bool)arg3;
- (bool)containsSuggestedWidgetForApp:(id)arg1;
- (bool)containsWidgetForApp:(id)arg1;
- (bool)containsWidgetForIntent:(id)arg1;
- (id)init;
- (id)initWithPageState:(id)arg1 stackConfig:(id)arg2 stackStateTracker:(id)arg3 suggestionDeduplicator:(id)arg4 hyperParameters:(id)arg5;
- (bool)isStale;
- (bool)mostRecentRotationOfStackIsSystemInitiated;
- (id)page;
- (id)previousSuggestedWidgets;
- (bool)previousSuggestedWidgetsContainIdenticalContentOfSuggestion:(id)arg1;
- (id)previousTopOfStackSuggestion;
- (id)previousTopWidget;
- (bool)previousTopWidgetWasShowingIdenticalContentOfSuggestion:(id)arg1;
- (void)setTopOfStackSuggestion:(id)arg1;
- (bool)sizeIsCompatibleWithWidgetSuggestion:(id)arg1;
- (id)suggestedWidgets;
- (id)suggestionsWidgetSuggestionsByWidgetUniqueId;
- (id)topOfStackSuggestion;
- (bool)topWidgetIsShowingIdenticalContentOfSuggestion:(id)arg1 ignoreDuplicatesInSGWidget:(bool)arg2 ignoreDuplicatesInPanels:(bool)arg3;
- (id)widgetForSuggestion:(id)arg1 considerSuggestedWidgets:(bool)arg2;

@end
