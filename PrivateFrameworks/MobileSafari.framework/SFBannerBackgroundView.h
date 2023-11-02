
@interface SFBannerBackgroundView : UIVisualEffectView {
    long long  _bannerStyle;
}

@property (nonatomic) long long bannerStyle;

- (void)_updateStyle;
- (void)_updateVibrancy;
- (long long)bannerStyle;
- (id)initWithEffect:(id)arg1;
- (void)setBannerStyle:(long long)arg1;

@end
