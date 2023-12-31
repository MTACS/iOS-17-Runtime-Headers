
@protocol SKUINavigationBarDisplayConfiguring <NSObject>

@required

- (UIColor *)navigationBarTintColor;
- (bool)prefersNavigationBarBackgroundViewHidden;

@optional

- (long long)navigationBarTintAdjustmentMode;
- (UIColor *)navigationBarTitleTextTintColor;
- (bool)prefersNavigationBarHidden;

@end
