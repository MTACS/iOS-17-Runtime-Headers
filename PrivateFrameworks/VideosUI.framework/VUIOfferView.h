
@interface VUIOfferView : VUIBaseView {
    UIView * _appIconView;
    UIView * _channelImageBackgroundView;
    VUILabel * _channelNameLabel;
    UIView * _imageView;
    bool  _isEntitled;
    UIView * _logoView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    double  _secondLineBaselineMargin;
    VUISeparatorView * _separatorView;
    VUILabel * _subtitleLabel;
    VUILabel * _textLabel;
    VUILabel * _titleLabel;
    double  _topPartAspectRatio;
    UIView * _versionsButton;
}

@property (nonatomic, retain) UIView *appIconView;
@property (nonatomic, retain) UIView *channelImageBackgroundView;
@property (nonatomic, retain) VUILabel *channelNameLabel;
@property (nonatomic, retain) UIView *imageView;
@property (nonatomic) bool isEntitled;
@property (nonatomic, retain) UIView *logoView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) double secondLineBaselineMargin;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUILabel *textLabel;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic) double topPartAspectRatio;
@property (nonatomic, retain) UIView *versionsButton;

- (void).cxx_destruct;
- (double)_chinHeightForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldDisplaySeparator;
- (id)appIconView;
- (id)channelImageBackgroundView;
- (id)channelNameLabel;
- (struct CGSize { double x1; double x2; })computeSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)imageView;
- (bool)isEntitled;
- (void)layoutOfferSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)logoView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)prepareForCellReuse;
- (double)secondLineBaselineMargin;
- (id)separatorView;
- (void)setAppIconView:(id)arg1;
- (void)setChannelImageBackgroundView:(id)arg1;
- (void)setChannelNameLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsEntitled:(bool)arg1;
- (void)setLogoView:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSecondLineBaselineMargin:(double)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopPartAspectRatio:(double)arg1;
- (void)setVersionsButton:(id)arg1;
- (id)subtitleLabel;
- (id)textLabel;
- (id)titleLabel;
- (double)topPartAspectRatio;
- (id)versionsButton;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
