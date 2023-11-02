
@protocol HFProcessedWallpaperSource <NSObject>

@required

- (UIImage *)generateFilteredImageForWallpaper:(HFWallpaper *)arg1 image:(UIImage *)arg2;
- (unsigned long long)processVersionNumber;
- (UIImage *)processedImageForVariant:(long long)arg1 wallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
- (NSArray *)supportedVariants;

@end
