
@interface _ATXAppPredictionPanelSuggestion : _ATXCompositeLayoutWidgetSuggestionBase

- (bool)addSuggestion:(id)arg1 asMainSuggestion:(bool)arg2 dryRun:(bool)arg3;
- (bool)containsIdenticalContentOfSuggestion:(id)arg1;
- (id)initForPreviewWithHyperParameters:(id)arg1;
- (id)initWithAppPredictionPanel:(id)arg1 containingStack:(id)arg2 suggestionDeduplicator:(id)arg3 hyperParameters:(id)arg4;
- (id)initWithAppPredictionPanel:(id)arg1 containingStack:(id)arg2 suggestionLayout:(id)arg3 suggestionDeduplicator:(id)arg4 hyperParameters:(id)arg5;

@end
