
@interface _ATXHomeScreenState : NSObject {
    NSSet * _appsOnDock;
    NSArray * _sortedPagesByUserLastVisit;
}

@property (nonatomic, readonly) NSSet *appsOnDock;
@property (nonatomic, readonly) NSArray *sortedPagesByUserLastVisit;

- (void).cxx_destruct;
- (id)appsOnDock;
- (bool)containsSuggestedWidgetForApp:(id)arg1;
- (bool)containsWidgetForIntent:(id)arg1;
- (id)init;
- (id)initWithSortedHomeScreenPagesByUserLastVisit:(id)arg1 appsOnDock:(id)arg2 stackStateTracker:(id)arg3 suggestionDeduplicator:(id)arg4 hyperParameters:(id)arg5;
- (bool)isShowingDuplicatedContentForSuggestion:(id)arg1 considerUnderStackContents:(bool)arg2 dedupeAppSuggestionsByWidgets:(bool)arg3 ignoreDuplicatesInSGWidget:(bool)arg4 ignoreDuplicatesInPanels:(bool)arg5 ignoreTodayPage:(bool)arg6;
- (id)sortedPagesByUserLastVisit;

@end
