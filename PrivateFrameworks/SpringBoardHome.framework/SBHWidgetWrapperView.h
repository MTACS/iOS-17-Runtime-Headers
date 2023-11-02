
@interface SBHWidgetWrapperView : UIView {
    long long  _backgroundType;
    NSLayoutConstraint * _contentHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    SBIconView * _contentView;
    NSLayoutConstraint * _contentWidthConstraint;
    double  _extraSpacingBetweenWidgetAndTitle;
    bool  _hoverAnimationEnabled;
    UIView * _shadowView;
    SBHShadowedWidgetView * _shadowedWidgetView;
    UILabel * _subtitleLabel;
    bool  _titleAndSubtitleVisible;
    UILabel * _titleLabel;
    NSLayoutConstraint * _widgetToTitleSpacingConstraint;
}

@property (nonatomic) long long backgroundType;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, retain) NSLayoutConstraint *contentHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) SBIconView *contentView;
@property (nonatomic, retain) NSLayoutConstraint *contentWidthConstraint;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double extraSpacingBetweenWidgetAndTitle;
@property (getter=isHoverAnimationEnabled, nonatomic) bool hoverAnimationEnabled;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } hoverTransform;
@property (nonatomic, readonly) UIView *shadowView;
@property (nonatomic, readonly) SBHShadowedWidgetView *shadowedWidgetView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) bool titleAndSubtitleVisible;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *widgetToTitleSpacingConstraint;

- (void).cxx_destruct;
- (void)_applyBackgroundType;
- (void)_applyBackgroundType:(long long)arg1 toView:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_subititleLabelFont;
- (id)_titleLabelFont;
- (void)_updateContentSizeConstraints;
- (void)_updateHoverAnimation;
- (long long)backgroundType;
- (id)containerView;
- (id)contentHeightConstraint;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)contentWidthConstraint;
- (double)cornerRadius;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)extraSpacingBetweenWidgetAndTitle;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })hoverTransform;
- (id)init;
- (id)initWithTitleAndSubtitleVisible:(bool)arg1;
- (bool)isHoverAnimationEnabled;
- (id)newPortaledShadowedWidgetView;
- (void)setBackgroundType:(long long)arg1;
- (void)setContentHeightConstraint:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setContentWidthConstraint:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setExtraSpacingBetweenWidgetAndTitle:(double)arg1;
- (void)setHoverAnimationEnabled:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setWidgetToTitleSpacingConstraint:(id)arg1;
- (id)shadowView;
- (id)shadowedWidgetView;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (bool)titleAndSubtitleVisible;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)widgetToTitleSpacingConstraint;

@end
