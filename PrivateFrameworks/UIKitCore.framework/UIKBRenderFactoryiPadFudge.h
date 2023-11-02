
@interface UIKBRenderFactoryiPadFudge : UIKBRenderFactoryiPad

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (unsigned long long)_isFullHeightKeyFor:(id)arg1 onKeyplane:(id)arg2;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)controlKeyFontSize;
- (struct CGSize { double x1; double x2; })defaultVariantGeometrySize;
- (double)deleteKeyFontSize;
- (struct CGPoint { double x1; double x2; })deleteKeyOffset:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })dictationKeyOffset;
- (struct CGPoint { double x1; double x2; })dismissKeyOffset;
- (id)displayContentsForKey:(id)arg1;
- (double)dualStringKeyBottomFontSize:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })dualStringKeyBottomTextOffset:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (double)dualStringKeyTopFontSize:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })dualStringKeyTopTextOffset:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint { double x1; double x2; })iPadFudgeControlKeyOffset;
- (bool)iPadFudgeLayout;
- (struct CGPoint { double x1; double x2; })internationalKeyOffset;
- (id)lightKeycapsFontName;
- (id)messagesWriteboardKeyImageName;
- (double)moreKeyFontSize;
- (struct CGPoint { double x1; double x2; })moreKeyOffset;
- (double)spaceKeyFontSize;
- (double)stringKeyFontSize:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })stringKeyOffset:(unsigned long long)arg1;
- (bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x1; double x2; })symbolImageControlKeyOffset;

@end
