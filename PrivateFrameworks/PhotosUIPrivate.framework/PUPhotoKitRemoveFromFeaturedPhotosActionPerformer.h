
@interface PUPhotoKitRemoveFromFeaturedPhotosActionPerformer : PUPhotoKitActionPerformer {
    NSDictionary * _assetToSuggestionMap;
}

@property (nonatomic, retain) NSDictionary *assetToSuggestionMap;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)assetToSuggestionMap;
- (void)performBackgroundTask;
- (void)setAssetToSuggestionMap:(id)arg1;

@end
