
@protocol HUWallpaperPickerInlineViewControllerDelegate <NSObject>

@required

- (void)wallpaperPicker:(HUWallpaperPickerInlineViewController *)arg1 didReceiveDroppedImage:(UIImage *)arg2;
- (void)wallpaperPicker:(HUWallpaperPickerInlineViewController *)arg1 didSelectWallpaper:(HFWallpaper *)arg2 withImage:(UIImage *)arg3;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(HUWallpaperPickerInlineViewController *)arg1;

@end
