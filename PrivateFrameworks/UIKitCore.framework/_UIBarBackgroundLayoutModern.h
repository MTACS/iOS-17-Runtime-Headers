
@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {
    _UIBarBackgroundAppearanceData * _backgroundData1;
    _UIBarBackgroundAppearanceData * _backgroundData2;
    bool  _backgroundsAreSame;
}

@property (nonatomic, retain) _UIBarBackgroundAppearanceData *backgroundData1;
@property (nonatomic, retain) _UIBarBackgroundAppearanceData *backgroundData2;

- (void).cxx_destruct;
- (id)backgroundData1;
- (id)backgroundData2;
- (double)bg1Alpha;
- (id)bg1Color;
- (id)bg1Effects;
- (bool)bg1HasShadow;
- (id)bg1Image;
- (long long)bg1ImageMode;
- (double)bg1ShadowAlpha;
- (id)bg1ShadowColor;
- (id)bg1ShadowEffect;
- (id)bg1ShadowImage;
- (id)bg1ShadowTint;
- (double)bg2Alpha;
- (id)bg2Color;
- (id)bg2Effects;
- (bool)bg2Enabled;
- (bool)bg2HasShadow;
- (id)bg2Image;
- (long long)bg2ImageMode;
- (double)bg2ShadowAlpha;
- (id)bg2ShadowColor;
- (id)bg2ShadowEffect;
- (id)bg2ShadowImage;
- (id)bg2ShadowTint;
- (void)describeInto:(id)arg1;
- (id)initWithLayout:(id)arg1;
- (void)setBackgroundData1:(id)arg1;
- (void)setBackgroundData2:(id)arg1;
- (bool)shouldUseExplicitGeometry;

@end
