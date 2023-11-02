
@interface ATXHomeScreenLogWidgetAddedFeatures : NSObject {
    NSArray * _galleryItems;
    ATXHomeScreenEvent * _hsEvent;
    unsigned long long  _rankOfWidgetInGallery;
    NSMutableDictionary * _widgetAddedFeatures;
}

- (void).cxx_destruct;
- (id)_key:(id)arg1 byAppendingStringIndicatingIfWidgetWasAdded:(bool)arg2;
- (id)_pickIndexForNegativeExampleFromGalleryItems;
- (void)_populateFeaturesForAddedWidget;
- (void)_populateFeaturesForNegativeExample;
- (void)_populateHomeScreenConfigFeaturesForWidgetBundleId:(id)arg1 widgetKind:(id)arg2 parentAppBundleId:(id)arg3 widgetWasAdded:(bool)arg4;
- (void)_populateParentAppFeaturesForParentAppBundleId:(id)arg1 widgetWasAdded:(bool)arg2;
- (void)_sendToCoreAnalytics;
- (id)initWithHSEvent:(id)arg1 rankOfWidgetInGallery:(unsigned long long)arg2 galleryItems:(id)arg3;
- (void)logWidgetAddedFeaturesInCoreAnalytics;

@end
