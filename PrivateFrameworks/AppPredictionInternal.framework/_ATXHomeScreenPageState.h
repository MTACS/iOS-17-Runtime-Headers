
@interface _ATXHomeScreenPageState : NSObject {
    ATXHomeScreenPage * _config;
    _ATXHomeScreenState * _homeScreen;
    ATXStackStateTracker * _stackStateTracker;
    NSArray * _stacks;
}

@property (nonatomic, readonly) ATXHomeScreenPage *config;
@property (nonatomic, readonly) _ATXHomeScreenState *homeScreen;
@property (nonatomic, readonly) NSArray *stacks;

- (void).cxx_destruct;
- (bool)_isShowingApp:(id)arg1 allowFolder:(bool)arg2;
- (id)config;
- (bool)containsSGWidget;
- (bool)containsSuggestedWidgetForApp:(id)arg1;
- (bool)containsWidgetForIntent:(id)arg1;
- (id)homeScreen;
- (id)init;
- (id)initWithHomeScreenState:(id)arg1 pageConfig:(id)arg2 stackStateTracker:(id)arg3 suggestionDeduplicator:(id)arg4 hyperParameters:(id)arg5;
- (bool)isSeldomVisited;
- (bool)isShowingDuplicatedContentForSuggestion:(id)arg1 considerUnderStackContents:(bool)arg2 dedupeAppSuggestionsByWidgets:(bool)arg3 ignoreDuplicatesInSGWidget:(bool)arg4 ignoreDuplicatesInPanels:(bool)arg5;
- (id)pinnedAPPs;
- (id)pinnedSGWidgets;
- (id)stacks;
- (bool)suggestionsWidgetOnPageIsShowingDuplicatedContentForSuggestion:(id)arg1;

@end
