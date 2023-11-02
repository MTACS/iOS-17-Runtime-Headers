
@interface CCUILabeledRoundButton : UIView <MTVisualStylingRequiring> {
    CCUIRoundButton * _buttonView;
    NSMutableDictionary * _categoriesToVisualStylingProviders;
    NSString * _contentSizeCategoryThreshold;
    bool  _dynamicLayoutEnabled;
    UIImage * _glyphImage;
    CCUICAPackageDescription * _glyphPackageDescription;
    NSString * _glyphState;
    UIColor * _highlightColor;
    UIColor * _highlightTintColor;
    bool  _labelsVisible;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
    bool  _useAlternateBackground;
}

@property (nonatomic, retain) CCUIRoundButton *buttonView;
@property (nonatomic) NSString *contentSizeCategoryThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDynamicLayoutEnabled, nonatomic) bool dynamicLayoutEnabled;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIColor *highlightTintColor;
@property (nonatomic) bool labelsVisible;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool useAlternateBackground;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_layoutLabels;
- (void)_setupLabelsBounds;
- (bool)_shouldUseLargeTextLayout;
- (void)_updateFonts;
- (void)_visualStylingProvider:(id)arg1 didChangeForCategory:(long long)arg2 outgoingVisualStylingProvider:(id)arg3;
- (void)buttonTapped:(id)arg1;
- (id)buttonView;
- (id)contentSizeCategoryThreshold;
- (void)didMoveToWindow;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (id)glyphState;
- (id)highlightColor;
- (id)highlightTintColor;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 highlightTintColor:(id)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 highlightTintColor:(id)arg3 useLightStyle:(bool)arg4;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDynamicLayoutEnabled;
- (bool)labelsVisible;
- (void)layoutSubviews;
- (id)requiredVisualStyleCategories;
- (void)setButtonView:(id)arg1;
- (void)setContentSizeCategoryThreshold:(id)arg1;
- (void)setDynamicLayoutEnabled:(bool)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightTintColor:(id)arg1;
- (void)setLabelsVisible:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUseAlternateBackground:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (bool)useAlternateBackground;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end