
@interface PXBoopableItemsProvider_Swift : NSObject <PXChangeObserver, UIActivityItemsConfigurationReading> {
    void assets;
    void cachedItemProvidersByAsset;
    void imagePreviewMediaProvider;
    void selectionManager;
}

@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, retain) PXMediaProvider *imagePreviewMediaProvider;
@property (nonatomic, readonly) NSArray *itemProvidersForActivityItemsConfiguration;
@property (nonatomic, retain) PXSectionedSelectionManager *selectionManager;

- (void).cxx_destruct;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)assets;
- (void)dealloc;
- (id)imagePreviewMediaProvider;
- (id)init;
- (id)itemProvidersForActivityItemsConfiguration;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)selectionManager;
- (void)setAssets:(id)arg1;
- (void)setImagePreviewMediaProvider:(id)arg1;
- (void)setSelectionManager:(id)arg1;

@end
