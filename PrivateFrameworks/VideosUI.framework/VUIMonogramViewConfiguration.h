
@interface VUIMonogramViewConfiguration : NSObject <NSCopying> {
    UIColor * _focusedBgColor;
    double  _focusedShadowAlpha;
    double  _focusedSizeIncrease;
    long long  _style;
    UIColor * _subtitleFocusedColor;
    long long  _subtitleTextStyle;
    UIColor * _subtitleUnfocusedColor;
    UIColor * _titleFocusedColor;
    long long  _titleTextStyle;
    UIColor * _titleUnfocusedColor;
    UIColor * _unfocusedBgColor;
    double  _unfocusedShadowAlpha;
}

@property (nonatomic, retain) UIColor *focusedBgColor;
@property (nonatomic) double focusedShadowAlpha;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *subtitleFocusedColor;
@property (nonatomic) long long subtitleTextStyle;
@property (nonatomic, retain) UIColor *subtitleUnfocusedColor;
@property (nonatomic, retain) UIColor *titleFocusedColor;
@property (nonatomic) long long titleTextStyle;
@property (nonatomic, retain) UIColor *titleUnfocusedColor;
@property (nonatomic, retain) UIColor *unfocusedBgColor;
@property (nonatomic, readonly) double unfocusedImageAlpha;
@property (nonatomic) double unfocusedShadowAlpha;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)focusedBgColor;
- (double)focusedShadowAlpha;
- (id)focusedShadowImage;
- (double)focusedSizeIncrease;
- (id)initWithShadowImages:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)setFocusedBgColor:(id)arg1;
- (void)setFocusedShadowAlpha:(double)arg1;
- (void)setFocusedSizeIncrease:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitleFocusedColor:(id)arg1;
- (void)setSubtitleTextStyle:(long long)arg1;
- (void)setSubtitleUnfocusedColor:(id)arg1;
- (void)setTitleFocusedColor:(id)arg1;
- (void)setTitleTextStyle:(long long)arg1;
- (void)setTitleUnfocusedColor:(id)arg1;
- (void)setUnfocusedBgColor:(id)arg1;
- (void)setUnfocusedShadowAlpha:(double)arg1;
- (long long)style;
- (id)subtitleFocusedColor;
- (long long)subtitleTextStyle;
- (id)subtitleUnfocusedColor;
- (id)titleFocusedColor;
- (long long)titleTextStyle;
- (id)titleUnfocusedColor;
- (id)unfocusedBgColor;
- (double)unfocusedImageAlpha;
- (double)unfocusedShadowAlpha;
- (id)unfocusedShadowImage;

@end
