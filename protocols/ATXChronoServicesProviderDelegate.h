
@protocol ATXChronoServicesProviderDelegate

@required

- (void)chronoServiceProvider:(ATXChronoServicesProvider *)arg1 finishedPrewarmingSuggestions:(ATXHomeScreenCachedSuggestions *)arg2;
- (void)chronoServiceProvider:(ATXChronoServicesProvider *)arg1 reloadDidCompleteForWidget:(CHSWidget *)arg2 success:(bool)arg3 widgetIsReadyForDisplay:(bool)arg4 error:(NSError *)arg5;

@end
