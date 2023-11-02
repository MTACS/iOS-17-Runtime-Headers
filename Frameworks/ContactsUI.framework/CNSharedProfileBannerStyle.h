
@interface CNSharedProfileBannerStyle : NSObject {
    UIButtonConfiguration * _actionButtonConfiguration;
    UIColor * _backgroundColor;
    UIVisualEffectView * _backgroundVisualEffectView;
    double  _leadingTrailingInset;
    UIFont * _subtitleFont;
    UIColor * _subtitleTextColor;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
    UIImageSymbolConfiguration * _xmarkButtonColorConfiguration;
}

@property (nonatomic, retain) UIButtonConfiguration *actionButtonConfiguration;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView;
@property (nonatomic) double leadingTrailingInset;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIColor *subtitleTextColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, retain) UIImageSymbolConfiguration *xmarkButtonColorConfiguration;

+ (id)defaultActionButtonConfiguration;
+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)actionButtonConfiguration;
- (id)backgroundColor;
- (id)backgroundVisualEffectView;
- (double)leadingTrailingInset;
- (void)setActionButtonConfiguration:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundVisualEffectView:(id)arg1;
- (void)setLeadingTrailingInset:(double)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setXmarkButtonColorConfiguration:(id)arg1;
- (id)subtitleFont;
- (id)subtitleTextColor;
- (id)titleFont;
- (id)titleTextColor;
- (id)xmarkButtonColorConfiguration;

@end
