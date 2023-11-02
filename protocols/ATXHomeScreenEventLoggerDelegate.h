
@protocol ATXHomeScreenEventLoggerDelegate

@required

- (bool)hasWidgetBeenSeen:(ATXHomeScreenWidgetIdentifiable *)arg1;
- (bool)hasWidgetBeenTapped:(ATXHomeScreenWidgetIdentifiable *)arg1;
- (void)logWidgetAddedFeaturesInCoreAnalytics:(ATXHomeScreenEvent *)arg1 rankOfWidgetInGallery:(unsigned long long)arg2 galleryItems:(NSArray *)arg3;

@end
