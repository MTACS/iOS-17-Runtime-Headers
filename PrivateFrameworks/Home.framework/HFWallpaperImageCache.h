
@interface HFWallpaperImageCache : NSObject {
    BSUIMappedImageCache * _imageCache;
    <HFProcessedWallpaperSource> * _processedWallpaperSource;
}

@property (nonatomic, retain) BSUIMappedImageCache *imageCache;
@property (retain) <HFProcessedWallpaperSource> *processedWallpaperSource;
@property (nonatomic, readonly) NSArray *supportedProcessedVariants;

- (void).cxx_destruct;
- (id)_cacheKeyForCustomBlurWallpaper:(id)arg1 withVariant:(long long)arg2;
- (id)_cacheKeyForDefaultBlurWallpaper:(id)arg1 withVariant:(long long)arg2 forUserInterfaceStyle:(long long)arg3;
- (id)_cacheKeyForWallpaper:(id)arg1 withVariant:(long long)arg2;
- (id)_imageForVariant:(long long)arg1 wallpaper:(id)arg2 imageKey:(id)arg3 withOriginalImageGenerator:(id /* block */)arg4;
- (void)_saveVariants:(long long)arg1 forWallpaper:(id)arg2 originalImage:(id)arg3 withImageKey:(id)arg4;
- (id)imageCache;
- (id)imageForVariant:(long long)arg1 wallpaper:(id)arg2 withOriginalImageGenerator:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1;
- (id)processedWallpaperSource;
- (void)pruneUnusedWallpaperVariants:(id)arg1;
- (void)saveVariantsForWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)setImageCache:(id)arg1;
- (void)setProcessedWallpaperSource:(id)arg1;
- (id)supportedProcessedVariants;

@end
