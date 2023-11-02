
@interface HFWallpaperFileManager : NSObject {
    NSURL * _wallpaperFolderURL;
}

@property (nonatomic, retain) NSURL *wallpaperFolderURL;

- (void).cxx_destruct;
- (id)_originalImageForWallpaper:(id)arg1 withFileName:(id)arg2;
- (void)_saveOriginalImage:(id)arg1 forWallpaper:(id)arg2 withFileName:(id)arg3;
- (id)fileNameForCustomBlurWallpaper:(id)arg1;
- (id)fileNameForDefaultBlurWallpaper:(id)arg1 userInterfaceStyle:(long long)arg2;
- (id)filenameForWallpaper:(id)arg1;
- (id)init;
- (bool)originalImageExistsForWallpaper:(id)arg1;
- (id)originalImageForWallpaper:(id)arg1;
- (void)pruneUnusedOriginalWallpaperImages:(id)arg1;
- (void)saveOriginalImage:(id)arg1 forWallpaper:(id)arg2;
- (void)setWallpaperFolderURL:(id)arg1;
- (id)wallpaperFolderURL;

@end
