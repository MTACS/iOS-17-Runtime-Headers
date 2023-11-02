
@interface PXBoopableItemsProvider : NSObject <UIActivityItemsConfigurationReading> {
    PXBoopableItemsProvider_Swift * _boopableItemsProvider;
}

@property (nonatomic, readonly, copy) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, retain) PXBoopableItemsProvider_Swift *boopableItemsProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXMediaProvider *imagePreviewMediaProvider;
@property (nonatomic, readonly, copy) NSArray *itemProvidersForActivityItemsConfiguration;
@property (nonatomic, retain) PXSectionedSelectionManager *selectionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)assets;
- (id)boopableItemsProvider;
- (id)imagePreviewMediaProvider;
- (id)init;
- (id)itemProvidersForActivityItemsConfiguration;
- (id)selectionManager;
- (void)setAssets:(id)arg1;
- (void)setBoopableItemsProvider:(id)arg1;
- (void)setImagePreviewMediaProvider:(id)arg1;
- (void)setSelectionManager:(id)arg1;

@end
