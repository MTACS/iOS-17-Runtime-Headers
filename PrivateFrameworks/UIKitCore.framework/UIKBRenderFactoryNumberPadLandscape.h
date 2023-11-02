
@interface UIKBRenderFactoryNumberPadLandscape : UIKBRenderFactoryNumberPad

- (void)_customizeSymbolStyle:(id)arg1 secondaryStyle:(id)arg2 forKey:(id)arg3 contents:(id)arg4;
- (struct CGPoint { double x1; double x2; })centerColumnLetterOffset;
- (struct CGPoint { double x1; double x2; })centerColumnNumberOffset;
- (struct CGPoint { double x1; double x2; })deleteGlyphOffset;
- (struct CGPoint { double x1; double x2; })dictationGlyphOffset;
- (struct CGPoint { double x1; double x2; })leftColumnLetterOffset;
- (struct CGPoint { double x1; double x2; })leftColumnNumberOffset;
- (double)letterFontSize;
- (struct CGPoint { double x1; double x2; })loneZeroOffset;
- (double)numberFontSize;
- (struct CGPoint { double x1; double x2; })rightColumnLetterOffset;
- (struct CGPoint { double x1; double x2; })rightColumnNumberOffset;
- (struct CGPoint { double x1; double x2; })specialSymbolOffset;

@end