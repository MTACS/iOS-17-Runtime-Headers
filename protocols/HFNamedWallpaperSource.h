
@protocol HFNamedWallpaperSource <NSObject>

@required

- (NSArray *)allWallpaperThumbnailsForCollection:(long long)arg1;
- (NSArray *)allWallpapersForCollection:(long long)arg1;
- (HFWallpaper *)defaultWallpaperForCollection:(long long)arg1;
- (UIImage *)imageForWallpaper:(HFWallpaper *)arg1;

@end
