
@protocol ATXHomeScreenEventLogging <NSObject>

@required

- (void)logContextMenuDismissOnceForSuggestion:(ATXProactiveSuggestion *)arg1 widget:(ATXHomeScreenWidgetIdentifiable *)arg2 blendingCacheId:(NSString *)arg3;
- (void)logContextMenuNeverShowAgainForSuggestion:(ATXProactiveSuggestion *)arg1 widget:(ATXHomeScreenWidgetIdentifiable *)arg2 blendingCacheId:(NSString *)arg3;
- (void)logDeviceLock;
- (void)logDeviceUnlock;
- (void)logDidTapSuggestion:(ATXProactiveSuggestion *)arg1 widget:(ATXHomeScreenWidgetIdentifiable *)arg2 blendingCacheId:(NSString *)arg3;
- (void)logHomeScreenDidDisappearWithReason:(NSString *)arg1;
- (void)logHomeScreenPageDidAppear:(unsigned long long)arg1 topWidgetsByStackIdentifier:(NSDictionary *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logSpecialPageDidAppear:(unsigned long long)arg1 widgetsByStackId:(NSDictionary *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logSpecialPageDidDisappear:(unsigned long long)arg1;
- (void)logStackDidAppear:(NSString *)arg1 topWidget:(ATXHomeScreenWidgetIdentifiable *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logStackDidDisappear:(NSString *)arg1 topWidget:(ATXHomeScreenWidgetIdentifiable *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logStackDidTap:(NSString *)arg1 engagedUrl:(NSURL *)arg2 widgetOnTop:(ATXHomeScreenWidgetIdentifiable *)arg3 prediction:(ATXHomeScreenPrediction *)arg4;
- (void)logStackDidTap:(NSString *)arg1 widgetOnTop:(ATXHomeScreenWidgetIdentifiable *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logStackStatusDidChange:(NSString *)arg1 widgetOnTop:(ATXHomeScreenWidgetIdentifiable *)arg2 reason:(unsigned long long)arg3 prediction:(ATXHomeScreenPrediction *)arg4;
- (void)logStackVisibilityChanged:(NSString *)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 topWidget:(ATXHomeScreenWidgetIdentifiable *)arg3 prediction:(ATXHomeScreenPrediction *)arg4;
- (void)logSuggestionsDidAppear:(NSArray *)arg1 widget:(ATXHomeScreenWidgetIdentifiable *)arg2 blendingCacheId:(NSString *)arg3;
- (void)logSuggestionsDidDisappear:(NSArray *)arg1 widget:(ATXHomeScreenWidgetIdentifiable *)arg2 blendingCacheId:(NSString *)arg3;
- (void)logSupplementaryActionInContextMenu:(unsigned long long)arg1 stackId:(NSString *)arg2 widgetOnTop:(ATXHomeScreenWidgetIdentifiable *)arg3 prediction:(ATXHomeScreenPrediction *)arg4;
- (void)logUserDidAcceptWidgetOnboardingSuggestion:(NSArray *)arg1;
- (void)logUserDidAddApp:(ATXHomeScreenApp *)arg1 page:(ATXHomeScreenPage *)arg2;
- (void)logUserDidAddPinnedWidget:(ATXHomeScreenWidgetIdentifiable *)arg1 page:(ATXHomeScreenPage *)arg2 defaultsComparator:(ATXDefaultHomeScreenItemComparator *)arg3;
- (void)logUserDidAddWidgetToStack:(ATXHomeScreenWidgetIdentifiable *)arg1 stackIdentifier:(NSString *)arg2 isSuggestion:(bool)arg3;
- (void)logUserDidChangeStackConfiguration:(NSString *)arg1;
- (void)logUserDidCreateStack:(ATXHomeScreenStackConfig *)arg1 page:(ATXHomeScreenPage *)arg2 isSuggestion:(bool)arg3;
- (void)logUserDidDeletePinnedWidget:(ATXHomeScreenWidgetIdentifiable *)arg1 stackLocation:(unsigned long long)arg2 page:(ATXHomeScreenPage *)arg3;
- (void)logUserDidDeleteStack:(ATXHomeScreenStackConfig *)arg1 stackKind:(unsigned long long)arg2 stackLocation:(unsigned long long)arg3 page:(ATXHomeScreenPage *)arg4;
- (void)logUserDidDeleteWidgetOnStack:(ATXHomeScreenWidgetIdentifiable *)arg1 stackIdentifier:(NSString *)arg2 stackKind:(unsigned long long)arg3 stackLocation:(unsigned long long)arg4;
- (void)logUserDidEnterEditModeForWidgetOnboarding;
- (void)logUserDidRejectWidgetOnboardingSuggestion:(NSArray *)arg1;
- (void)logUserDidRemoveApp:(ATXHomeScreenApp *)arg1 page:(ATXHomeScreenPage *)arg2;
- (void)logUserDidStartWidgetOnboarding;
- (void)logUserDidSwitchHomeScreenExperience:(unsigned long long)arg1;
- (void)logWidgetDidAppear:(ATXHomeScreenWidgetIdentifiable *)arg1 blendingCacheId:(NSString *)arg2;
- (void)logWidgetDidAppear:(ATXHomeScreenWidgetIdentifiable *)arg1 stackId:(NSString *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logWidgetDidDisappear:(ATXHomeScreenWidgetIdentifiable *)arg1 blendingCacheId:(NSString *)arg2;
- (void)logWidgetDidDisappear:(ATXHomeScreenWidgetIdentifiable *)arg1 stackId:(NSString *)arg2 prediction:(ATXHomeScreenPrediction *)arg3;
- (void)logWidgetInsertionDidFailInStack:(NSString *)arg1 prediction:(ATXHomeScreenPrediction *)arg2;
- (void)logWidgetOccluded:(ATXHomeScreenWidgetIdentifiable *)arg1 blendingCacheId:(NSString *)arg2;
- (void)logWidgetUnoccluded:(ATXHomeScreenWidgetIdentifiable *)arg1 blendingCacheId:(NSString *)arg2;

@end
