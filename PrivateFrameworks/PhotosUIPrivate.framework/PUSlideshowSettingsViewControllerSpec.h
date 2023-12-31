
@interface PUSlideshowSettingsViewControllerSpec : PUViewControllerSpec

@property (nonatomic, readonly) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) unsigned long long rectEdgeForExtendedLayout;
@property (nonatomic, readonly) bool shouldShowNavigationBar;
@property (nonatomic, readonly) bool shouldUseBlurredBackground;
@property (nonatomic, readonly) UIColor *tableViewBackgroundColor;
@property (nonatomic, readonly) UIView *tableViewHeaderView;

- (id)cellBackgroundColor;
- (id)currentChange;
- (id)newSpecChange;
- (unsigned long long)rectEdgeForExtendedLayout;
- (bool)shouldShowNavigationBar;
- (bool)shouldUseBlurredBackground;
- (id)tableViewBackgroundColor;
- (id)tableViewHeaderView;

@end
