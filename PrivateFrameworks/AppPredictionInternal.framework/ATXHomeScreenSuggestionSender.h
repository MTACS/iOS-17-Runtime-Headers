
@interface ATXHomeScreenSuggestionSender : NSObject <ATXHomeScreenSuggestionServerXPCInterface> {
    _PASXPCClientHelper * _xpcClientHelper;
}

- (void).cxx_destruct;
- (void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)arg1 completion:(id /* block */)arg2;
- (void)forceDebugRotationForStack:(id)arg1 extensionBundleId:(id)arg2 kind:(id)arg3 completion:(id /* block */)arg4;
- (void)getCurrentSuggestionsWidgetAndAppPredictionPanelLayoutsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(id /* block */)arg1;

@end
