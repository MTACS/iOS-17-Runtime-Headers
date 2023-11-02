
@protocol SBLockScreenModalView <NSObject>

@required

- (<SBLockScreenModalViewDelegate> *)delegate;
- (NSString *)footerText;
- (UIImage *)image;
- (_UILegibilitySettings *)legibilitySettings;
- (UIColor *)primaryActionButtonBackgroundColor;
- (NSString *)primaryActionButtonText;
- (NSString *)secondaryActionButtonText;
- (UIColor *)secondaryActionButtonTextColor;
- (NSString *)secondarySubtitleText;
- (void)setDelegate:(id <SBLockScreenModalViewDelegate>)arg1;
- (void)setFooterText:(NSString *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setLegibilitySettings:(_UILegibilitySettings *)arg1;
- (void)setPrimaryActionButtonBackgroundColor:(UIColor *)arg1;
- (void)setPrimaryActionButtonText:(NSString *)arg1;
- (void)setSecondaryActionButtonText:(NSString *)arg1;
- (void)setSecondaryActionButtonTextColor:(UIColor *)arg1;
- (void)setSecondarySubtitleText:(NSString *)arg1;
- (void)setSubtitleText:(NSString *)arg1;
- (void)setTitleText:(NSString *)arg1;
- (void)setTitleTextColor:(UIColor *)arg1;
- (NSString *)subtitleText;
- (NSString *)titleText;
- (UIColor *)titleTextColor;

@end
