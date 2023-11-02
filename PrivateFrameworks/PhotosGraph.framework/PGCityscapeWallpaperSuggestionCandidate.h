
@interface PGCityscapeWallpaperSuggestionCandidate : NSObject {
    PHAsset * _asset;
    PNWallpaperCropResult * _cropResult;
}

@property (readonly) PHAsset *asset;
@property (readonly) PNWallpaperCropResult *cropResult;

- (void).cxx_destruct;
- (id)asset;
- (id)cropResult;
- (id)initWithAsset:(id)arg1;

@end
