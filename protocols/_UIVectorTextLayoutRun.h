
@protocol _UIVectorTextLayoutRun <NSObject>

@required

- (double)baseline;
- (void)enumerateGlyphsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIVectorTextLayoutGlyph> *, bool*, void*
- (UIFont *)font;
- (unsigned long long)glyphCount;
- (unsigned long long)lineIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineRect;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (bool)shouldRender;
- (NSString *)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedLineRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedRunRect;

@end
