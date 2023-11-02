
@protocol ATXHomeScreenSuggestionClientXPCInterface

@required

- (void)logWidgetAddedFeaturesInCoreAnalytics:(ATXHomeScreenEvent *)arg1 rankOfWidgetInGallery:(unsigned long long)arg2 galleryItems:(NSArray *)arg3;

@end
