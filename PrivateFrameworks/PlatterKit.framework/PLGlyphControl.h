
@interface PLGlyphControl : UIControl <MTMaterialGrouping, MTVisualStylingRequiring> {
    MTMaterialView * _backgroundMaterialView;
    bool  _blurEnabled;
    UIImageView * _glyphView;
    long long  _materialRecipe;
    long long  _visualStyle;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (getter=_backgroundMaterialView, nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (getter=_backgroundMaterialView, nonatomic, retain) MTMaterialView *backgroundMaterialView;
@property (getter=isBlurEnabled, nonatomic) bool blurEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIImage *glyph;
@property (getter=_glyphView, nonatomic, retain) UIImageView *glyphView;
@property (getter=_glyphView, nonatomic, readonly) UIImageView *glyphView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, readonly) long long materialRecipe;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (nonatomic) long long visualStyle;

+ (id)dismissControlWithMaterialRecipe:(long long)arg1;

- (void).cxx_destruct;
- (id)_backgroundMaterialView;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureGlyphViewIfNecessaryWithImage:(id)arg1;
- (void)_configureMaterialViewIfNecessary:(id*)arg1 positioningAtIndex:(unsigned long long)arg2;
- (double)_cornerRadius;
- (id)_glyphView;
- (void)_handleTouchUpInsideWithEvent:(id)arg1;
- (void)_removeAllVisualStyling;
- (void)_removeVisualStylingOfView:(id)arg1;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_updateAllVisualStyling;
- (void)_updateGlyphViewVisualStyling;
- (void)_updateVisualStylingOfView:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)glyph;
- (id)initWithMaterialRecipe:(long long)arg1;
- (bool)isBlurEnabled;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (long long)materialRecipe;
- (id)requiredVisualStyleCategories;
- (void)setBackgroundMaterialView:(id)arg1;
- (void)setBlurEnabled:(bool)arg1;
- (void)setGlyph:(id)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setVisualStyle:(long long)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)visualStyle;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
