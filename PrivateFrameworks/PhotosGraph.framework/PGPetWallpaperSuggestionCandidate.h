
@interface PGPetWallpaperSuggestionCandidate : NSObject {
    PHAsset * _asset;
    PNWallpaperCropResult * _cropResult;
    PHFace * _face;
}

@property (readonly) PHAsset *asset;
@property (readonly) PNWallpaperCropResult *cropResult;
@property (readonly) PHFace *face;

- (void).cxx_destruct;
- (id)asset;
- (id)cropResult;
- (id)face;
- (id)initWithFace:(id)arg1 inAsset:(id)arg2;

@end
