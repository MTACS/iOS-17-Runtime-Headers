
@protocol HUWallpaperEditingViewControllerDelegate <NSObject>

@required

- (void)wallpaperEditing:(HUWallpaperEditingViewController *)arg1 didFinishWithWallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
- (void)wallpaperEditingDidCancel:(HUWallpaperEditingViewController *)arg1;

@end
