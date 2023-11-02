
@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (double)_row4ControlSegmentWidthLeft;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (double)defaultPathWeight;
- (struct CGPoint { double x1; double x2; })deleteKeyOffset;
- (struct CGPoint { double x1; double x2; })dismissKeyOffset;
- (double)dynamicBottomRowMultiplier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dynamicInsets;
- (struct CGPoint { double x1; double x2; })internationalKeyOffset;
- (double)keyCornerRadius;
- (double)keyInsetBottom;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (struct CGPoint { double x1; double x2; })shiftKeyOffset;
- (double)skinnyKeyThreshold;
- (bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)symbolFrameInset;
- (double)symbolImageControlKeyFontSize;
- (double)variantAnnotationTextFontSize;
- (struct CGPoint { double x1; double x2; })variantAnnotationTextOffset;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;

@end
