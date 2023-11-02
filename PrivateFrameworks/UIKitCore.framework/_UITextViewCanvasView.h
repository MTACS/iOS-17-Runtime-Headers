
@interface _UITextViewCanvasView : _UITextCanvasView

@property (nonatomic) <_UITextViewCanvasViewContext> *context;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_extendedGlyphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 maxGlyphIndex:(unsigned long long)arg2;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
