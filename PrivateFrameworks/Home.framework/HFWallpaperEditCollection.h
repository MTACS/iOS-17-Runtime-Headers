
@interface HFWallpaperEditCollection : NSObject {
    UIImage * _originalImage;
    UIImage * _processedImage;
    HFWallpaper * _wallpaper;
}

@property (nonatomic, readonly) UIImage *originalImage;
@property (nonatomic, readonly) UIImage *processedImage;
@property (nonatomic, readonly) HFWallpaper *wallpaper;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWallpaper:(id)arg1 originalImage:(id)arg2 processedImage:(id)arg3;
- (id)originalImage;
- (id)processedImage;
- (id)wallpaper;

@end
