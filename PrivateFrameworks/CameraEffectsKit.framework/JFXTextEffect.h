
@interface JFXTextEffect : JFXEffect

@property (nonatomic, readonly) UIColor *customTextEditTintColor;
@property (nonatomic, readonly) bool textBakedIn;

- (void)beginTextEditing;
- (id)contentProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customTextEditColor;
- (id)customTextEditTintColor;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (id)defaultTypingAttributes:(unsigned long long)arg1;
- (id)editUIProperties;
- (void)enableDynamicLineSpacingForDiacritics:(bool)arg1;
- (void)endTextEditing;
- (unsigned long long)indexOfTextObjectUsedForEditViewTransform;
- (bool)isAppearanceEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (id)localizedDefaultFontName;
- (id)localizedDefaultText;
- (unsigned long long)maxCharacters;
- (void)setFont:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFontScale:(float)arg1 atIndex:(unsigned long long)arg2;
- (void)setFontSize:(float)arg1 atIndex:(unsigned long long)arg2;
- (void)setString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setupLocalizedText;
- (id)strings;
- (bool)textBakedIn;
- (bool)textBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 atIndex:(unsigned long long)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4 includeDropShadow:(bool)arg5 includeMasks:(bool)arg6;
- (id)textBoundsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 includeMasks:(bool)arg4;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })textCornersAtIndex:(unsigned long long)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 scale:(struct CGPoint { double x1; double x2; })arg5 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 basisOrigin:(int)arg7;
- (id)textEffectContentDataSource;
- (id)textFrameAtIndex:(unsigned long long)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 basisOrigin:(int)arg6;
- (id)textFramesAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 basisOrigin:(int)arg5;
- (long long)textHitTest:(struct CGPoint { double x1; double x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4;

@end
