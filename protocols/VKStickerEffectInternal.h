
@protocol VKStickerEffectInternal <NSObject>

@required

- (bool)applyBrushBeforeStroke;
- (void)applyComicInkParameters;
- (void)applyComicParameters;
- (bool)applyIridescenceBeforeStroke;
- (bool)forceSmallStrokeRadiusMultiplier;
- (int)iridescence;
- (bool)isBrushed;
- (bool)isComicEnabled;
- (bool)isCurlEnabled;
- (bool)isPuffy;
- (bool)isStroked;
- (float)normalsRadius;
- (bool)requiresDeviceMotion;
- (void)setApplyBrushBeforeStroke:(bool)arg1;
- (void)setApplyIridescenceBeforeStroke:(bool)arg1;
- (void)setForceSmallStrokeRadiusMultiplier:(bool)arg1;
- (void)setIridescence:(int)arg1;
- (void)setIsBrushed:(bool)arg1;
- (void)setIsComicEnabled:(bool)arg1;
- (void)setIsCurlEnabled:(bool)arg1;
- (void)setIsPuffy:(bool)arg1;
- (void)setIsStroked:(bool)arg1;
- (void)setNormalsRadius:(float)arg1;
- (void)setShadowOffset;
- (void)setShadowParallax;
- (void)setShadowRadius:(float)arg1;
- (void)setSmallShadowAlphaMultiplier:(float)arg1;
- (void)setSmallShadowSizeMultiplier:(float)arg1;
- (void)setSmallStrokeRadiusMultiplier:(float)arg1;
- (void)setStrokeBlurRadius:(float)arg1;
- (void)setStrokeRadius:(float)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)shadowOffset;
- (id)shadowParallax;
- (float)shadowRadius;
- (float)smallShadowAlphaMultiplier;
- (float)smallShadowSizeMultiplier;
- (float)smallStrokeRadiusMultiplier;
- (float)strokeBlurRadius;
- (float)strokeRadius;
- (unsigned long long)type;

@end
