
@interface _UITabBarAppearanceStorage : NSObject {
    UIColor * _unselectedImageTintColor;
    UIImage * backgroundImage;
    UIColor * barTintColor;
    UIColor * selectedImageTintColor;
    UIImage * selectionIndicatorImage;
    UIImage * shadowImage;
    _UITabBarItemAppearanceStorage * tabItemAppearanceStorage;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, retain) UIColor *selectedImageTintColor;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, retain) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
@property (nonatomic, retain) UIColor *unselectedImageTintColor;

- (void).cxx_destruct;
- (id)_tabItemAppearanceStorage;
- (id)backgroundImage;
- (id)barTintColor;
- (id)selectedImageTintColor;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTabItemAppearanceStorage:(id)arg1;
- (void)setUnselectedImageTintColor:(id)arg1;
- (id)shadowImage;
- (id)tabItemAppearanceStorage;
- (id)unselectedImageTintColor;

@end
