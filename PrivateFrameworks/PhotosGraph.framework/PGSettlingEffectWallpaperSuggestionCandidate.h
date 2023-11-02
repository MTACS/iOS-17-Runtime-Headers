
@interface PGSettlingEffectWallpaperSuggestionCandidate : NSObject {
    PHAsset * _asset;
    PNWallpaperCropResult * _cropResult;
    PHSuggestion * _suggestion;
}

@property (readonly) PHAsset *asset;
@property (readonly) PNWallpaperCropResult *cropResult;
@property (readonly) PHSuggestion *suggestion;

+ (id)sortDescriptorsForProcessing;

- (void).cxx_destruct;
- (id)asset;
- (id)cropResult;
- (id)initWithAsset:(id)arg1 suggestion:(id)arg2;
- (id)suggestion;

@end
