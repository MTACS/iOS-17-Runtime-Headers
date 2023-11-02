
@interface PNWallpaperCropResult : NSObject {
    PNWallpaperCrop * _landscapeCrop;
    PNWallpaperCrop * _portraitCrop;
}

@property (nonatomic, readonly) PNWallpaperCrop *landscapeCrop;
@property (nonatomic, readonly) PNWallpaperCrop *portraitCrop;

+ (id)cropScoreSortDescriptorForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)cropForOrientation:(long long)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAsset:(id)arg1 classification:(unsigned long long)arg2;
- (id)landscapeCrop;
- (id)portraitCrop;

@end
