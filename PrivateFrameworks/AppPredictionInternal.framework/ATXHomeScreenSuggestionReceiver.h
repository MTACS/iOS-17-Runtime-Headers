
@interface ATXHomeScreenSuggestionReceiver : NSObject <ATXHomeScreenSuggestionClientXPCInterface>

- (void)logWidgetAddedFeaturesInCoreAnalytics:(id)arg1 rankOfWidgetInGallery:(unsigned long long)arg2 galleryItems:(id)arg3;

@end
