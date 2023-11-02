
@protocol SFSettingsAlertItemView <NSObject>

@required

- (NSAttributedString *)attributedDetailText;
- (NSAttributedString *)attributedText;
- (long long)backgroundMode;
- (long long)defaultBackgroundMode;
- (<SFSettingsAlertItemViewDelegate> *)delegate;
- (NSString *)detailText;
- (bool)hidesSeparator;
- (UIImage *)image;
- (bool)isEnabled;
- (bool)isSelected;
- (_SFSettingsAlertItem *)item;
- (void)setAttributedDetailText:(NSAttributedString *)arg1;
- (void)setAttributedText:(NSAttributedString *)arg1;
- (void)setDefaultBackgroundMode:(long long)arg1;
- (void)setDelegate:(id <SFSettingsAlertItemViewDelegate>)arg1;
- (void)setDetailText:(NSString *)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidesSeparator:(bool)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setItem:(_SFSettingsAlertItem *)arg1;
- (void)setSelected:(bool)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;

@end
