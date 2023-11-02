
@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton {
    NSMutableDictionary * __imagesByText;
    long long  _aspectRatio;
}

@property (nonatomic, readonly) NSMutableDictionary *_imagesByText;
@property (nonatomic) long long aspectRatio;

+ (id)localizedTitleForAspectRatio:(long long)arg1 useBriefText:(bool)arg2;

- (void).cxx_destruct;
- (id)_imageForAspectRatio:(long long)arg1;
- (id)_imagesByText;
- (long long)aspectRatio;
- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageNameForCurrentState;
- (id)initWithLayoutStyle:(long long)arg1;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setAspectRatio:(long long)arg1;
- (void)updateImage;

@end
