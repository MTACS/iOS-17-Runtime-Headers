
@interface HUWallpaperView : UIImageView {
    UIImage * _currentImage;
    CAGradientLayer * _currentLayer;
    bool  _disableWallpaperUpdate;
    <HFHomeKitObject><HMApplicationData> * _hkObject;
    HFWallpaper * _wallpaper;
}

@property (nonatomic, retain) UIImage *currentImage;
@property (nonatomic, retain) CAGradientLayer *currentLayer;
@property (nonatomic) bool disableWallpaperUpdate;
@property (nonatomic, retain) <HFHomeKitObject><HMApplicationData> *hkObject;
@property (nonatomic, retain) HFWallpaper *wallpaper;

- (void).cxx_destruct;
- (id)currentImage;
- (id)currentLayer;
- (bool)disableWallpaperUpdate;
- (id)hkObject;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateWallpaper:(id)arg1 withAnimation:(bool)arg2 onlyIfNeeded:(bool)arg3;
- (id)refreshWallpaperForHomeKitObject:(id)arg1 withAnimation:(bool)arg2;
- (void)setCurrentImage:(id)arg1;
- (void)setCurrentImage:(id)arg1 withAnimation:(bool)arg2;
- (void)setCurrentLayer:(id)arg1;
- (void)setCurrentLayer:(id)arg1 withAnimation:(bool)arg2;
- (void)setDisableWallpaperUpdate:(bool)arg1;
- (void)setHkObject:(id)arg1;
- (void)setWallpaper:(id)arg1;
- (id)wallpaper;

@end
