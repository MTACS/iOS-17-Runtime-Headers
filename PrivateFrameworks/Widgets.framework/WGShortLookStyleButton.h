
@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping> {
    bool  _backgroundBlurred;
    MTMaterialView * _backgroundView;
    BSUIFontProvider * _fontProvider;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UILabel * _titleLabel;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)_backgroundViewCornerRadius;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureMaskIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (void)_layoutTitleLabel;
- (void)_setBackgroundViewCornerRadius:(double)arg1;
- (struct CGSize { double x1; double x2; })_size;
- (void)_updateHighlight;
- (void)_updateTitleLabelFont;
- (void)_updateTouchInsetsIfNecessary;
- (id)fontForTitle:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateCachedGeometry;
- (bool)isBackgroundBlurred;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
