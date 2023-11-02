
@interface MFMailComposeNavigationBarTitleView : _UINavigationBarTitleView {
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)attributedStringsCache;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsWithExclusionRects:(id)arg1 wantsUniformHorizontalInsets:(bool)arg2;
- (bool)_needsToLayoutTitleLabel;
- (double)_subtitleFontSizeWhenMini:(bool)arg1;
- (id)_subtitleTextColor;
- (double)_titleFontSizeWhenMini:(bool)arg1;
- (double)_topPaddingForTitleWhenMini:(bool)arg1;
- (void)_updateHeightForCurrentTraits;
- (void)_updateTrailingBarButtonItemsAlpha;
- (double)_verticalOffsetForSubtitleWhenMini:(bool)arg1;
- (void)contentDidChange;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 withStyle:(unsigned long long)arg2;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
