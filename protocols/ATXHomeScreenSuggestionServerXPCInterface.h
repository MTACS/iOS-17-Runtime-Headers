
@protocol ATXHomeScreenSuggestionServerXPCInterface

@required

- (void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXHomeScreenCachedSuggestions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceDebugRotationForStack:(void *)arg1 extensionBundleId:(void *)arg2 kind:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getCurrentSuggestionsWidgetAndAppPredictionPanelLayoutsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
