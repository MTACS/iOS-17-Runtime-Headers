
@interface VUIChannelBannerView : VUIBaseView {
    UIView * _appleTVChannelLogoView;
    UIView * _bgColorView;
    VUIProductUberBackgroundView * _bgImageView;
    UIView * _descriptionTextView;
    VUILabel * _disclaimerTextLabel;
    double  _height;
    bool  _isDescriptionPreferredOnPhoneSizeClass;
    double  _logoHeight;
    VUISeparatorView * _separatorView;
    UIView * _subscribeButton;
    double  _subscribeButtonHeight;
    NSArray * _textLabels;
}

@property (nonatomic, retain) UIView *appleTVChannelLogoView;
@property (nonatomic, retain) UIView *bgColorView;
@property (nonatomic, retain) VUIProductUberBackgroundView *bgImageView;
@property (nonatomic, retain) UIView *descriptionTextView;
@property (nonatomic, retain) VUILabel *disclaimerTextLabel;
@property (nonatomic) double height;
@property (nonatomic) bool isDescriptionPreferredOnPhoneSizeClass;
@property (nonatomic) double logoHeight;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) UIView *subscribeButton;
@property (nonatomic) double subscribeButtonHeight;
@property (nonatomic, retain) NSArray *textLabels;
@property (nonatomic, readonly) double topThreshold;

- (void).cxx_destruct;
- (bool)_isSubscribed;
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2 maxWidth:(double)arg3;
- (struct CGSize { double x1; double x2; })_layoutSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (double)_subscribeButtonHeight;
- (id)appleTVChannelLogoView;
- (id)bgColorView;
- (id)bgImageView;
- (id)descriptionTextView;
- (id)disclaimerTextLabel;
- (double)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDescriptionPreferredOnPhoneSizeClass;
- (double)logoHeight;
- (id)separatorView;
- (void)setAppleTVChannelLogoView:(id)arg1;
- (void)setBgColorView:(id)arg1;
- (void)setBgImageView:(id)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setDisclaimerTextLabel:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setIsDescriptionPreferredOnPhoneSizeClass:(bool)arg1;
- (void)setLogoHeight:(double)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubscribeButton:(id)arg1;
- (void)setSubscribeButtonHeight:(double)arg1;
- (void)setTextLabels:(id)arg1;
- (void)setVuiBackgroundColor:(id)arg1;
- (id)subscribeButton;
- (double)subscribeButtonHeight;
- (id)textLabels;
- (double)topThreshold;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
