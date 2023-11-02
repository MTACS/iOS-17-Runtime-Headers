
@interface CRCompositeOutputRegion : CROutputRegion

- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)outputRegionWithContentsOfQuad:(id)arg1;
- (void)setShouldComputeBoundsFromChildren:(bool)arg1;

@end
