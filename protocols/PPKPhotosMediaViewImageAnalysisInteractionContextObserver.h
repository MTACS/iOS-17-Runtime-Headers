
@protocol PPKPhotosMediaViewImageAnalysisInteractionContextObserver

@required

- (void)contextActiveInteractionTypesDidChange:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextAnalysisDidChange:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextAvailableResultsDidChange:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextDidDismissVisualSearchController:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;
- (void)contextWillPresentVisualSearchController:(id <PPKPhotosMediaViewImageAnalysisInteractionContext>)arg1;

@end
