
@interface SBRingerPillView : UIView {
    NSArray * _glyphTintBackgroundLayers;
    UIColor * _glyphTintColor;
    NSArray * _glyphTintShapeLayers;
    BSUICAPackageView * _glyphView;
    MTMaterialView * _materialView;
    UILabel * _offLabel;
    UILabel * _onLabel;
    UILabel * _ringerLabel;
    MTShadowView * _shadowView;
    UILabel * _silentModeLabel;
    SBRingerVolumeSliderView * _slider;
    float  _sliderValue;
    unsigned long long  _state;
    MTVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, copy) NSArray *glyphTintBackgroundLayers;
@property (nonatomic, retain) UIColor *glyphTintColor;
@property (nonatomic, copy) NSArray *glyphTintShapeLayers;
@property (nonatomic, retain) BSUICAPackageView *glyphView;
@property (nonatomic, retain) MTMaterialView *materialView;
@property (nonatomic, retain) UILabel *offLabel;
@property (nonatomic, retain) UILabel *onLabel;
@property (nonatomic, retain) UILabel *ringerLabel;
@property (nonatomic, retain) MTShadowView *shadowView;
@property (nonatomic, retain) UILabel *silentModeLabel;
@property (nonatomic, retain) SBRingerVolumeSliderView *slider;
@property (nonatomic) float sliderValue;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) MTVisualStylingProvider *stylingProvider;

- (void).cxx_destruct;
- (void)_setGlyphTintColor:(id)arg1 animationDuration:(double)arg2;
- (void)_updateGlyphWithStaticColor:(id)arg1 animationSettings:(id)arg2;
- (id)_visibleViewsForState:(unsigned long long)arg1;
- (id)glyphTintBackgroundLayers;
- (id)glyphTintColor;
- (id)glyphTintShapeLayers;
- (id)glyphView;
- (id)init;
- (void)layoutSubviews;
- (id)materialView;
- (id)offLabel;
- (id)onLabel;
- (id)ringerLabel;
- (void)setGlyphTintBackgroundLayers:(id)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)setGlyphTintShapeLayers:(id)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setOffLabel:(id)arg1;
- (void)setOnLabel:(id)arg1;
- (void)setRingerLabel:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setSilentModeLabel:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setSliderValue:(float)arg1;
- (void)setSliderValue:(double)arg1 animated:(bool)arg2;
- (void)setState:(unsigned long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (id)shadowView;
- (id)silentModeLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)slider;
- (float)sliderValue;
- (unsigned long long)state;
- (id)stylingProvider;
- (void)traitCollectionDidChange:(id)arg1;

@end
