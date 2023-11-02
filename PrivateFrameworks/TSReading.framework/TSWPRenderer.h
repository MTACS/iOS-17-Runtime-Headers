
@interface TSWPRenderer : NSObject {
    struct CGContext { } * _context;
    bool  _flipShadows;
    TSDBezierPath * _interiorClippingPath;
    bool  _preventClipToColumn;
    double  _viewScale;
}

@property (nonatomic) bool flipShadows;
@property (nonatomic, retain) TSDBezierPath *interiorClippingPath;
@property (nonatomic) bool preventClipToColumn;
@property (nonatomic) double viewScale;

+ (struct __CTFont { }*)invisiblesFont;

- (struct CGSize { double x1; double x2; })convertSizeToDeviceSpace:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didRenderFragments;
- (void)drawAdornmentRects:(const void*)arg1 forColumn:(id)arg2 foreground:(bool)arg3;
- (void)drawFragment:(const void*)arg1 updateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawingState:(const void*)arg3 runState:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; double x3; id x4[3]; unsigned int x5; struct TSWPDrawingState {} *x6; id x7; id x8; id x9; struct __CTFont {} *x10; struct CGColor {} *x11; id x12; bool x13; int x14; double x15; struct CGColor {} *x16; double x17; }*)arg4 lineDrawFlags:(unsigned int)arg5;
- (bool)flipShadows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getClipBoundingBox;
- (id)initWithContext:(struct CGContext { }*)arg1;
- (id)interiorClippingPath;
- (void)p_calculateMarkAdornments:(void*)arg1 drawingState:(const void*)arg2 lineFragment:(const void*)arg3;
- (bool)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const void*)arg2;
- (void)p_drawAdornmentGlyphs:(const void*)arg1 lineFragment:(const void*)arg2 state:(const void*)arg3;
- (void)p_drawAdornmentLine:(const struct TSWPAdornmentLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGColor {} *x3; double x4; unsigned int x5; int x6; int x7; double x8; bool x9; id x10; }*)arg1 drawingState:(const void*)arg2 lineFragment:(const void*)arg3 lineFragmentStart:(struct CGPoint { double x1; double x2; })arg4 vertical:(bool)arg5;
- (void)p_drawAdornmentLineBackgroundRect:(const struct TSWPAdornmentLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGColor {} *x3; double x4; unsigned int x5; int x6; int x7; double x8; bool x9; id x10; }*)arg1 lineDrawFlags:(unsigned int)arg2 drawingState:(const void*)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)p_drawAdornments:(const void*)arg1 lineFragment:(const void*)arg2 state:(const void*)arg3;
- (void)p_drawAttachmentAdornments:(const void*)arg1 lineFragment:(const void*)arg2 state:(const void*)arg3;
- (void)p_drawAttachmentGlyphAtPosition:(struct { unsigned long long x1; double x2; })arg1 fragment:(const void*)arg2;
- (void)p_drawAutocorrectionMarkingsFragment:(const void*)arg1 drawingState:(const void*)arg2;
- (void)p_drawDictationMarkingsFragment:(const void*)arg1 drawingState:(const void*)arg2;
- (void)p_drawHiddenDeletionsAdornments:(const void*)arg1 lineFragment:(const void*)arg2 state:(const void*)arg3;
- (void)p_drawInvisiblesAdornments:(const void*)arg1 lineFragment:(const void*)arg2 state:(const void*)arg3;
- (void)p_drawInvisiblesBreakLine:(const struct TSWPAdornmentLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGColor {} *x3; double x4; unsigned int x5; int x6; int x7; double x8; bool x9; id x10; }*)arg1 lineFragment:(const void*)arg2 state:(const void*)arg3;
- (void)p_drawListLabelForFragment:(const void*)arg1 drawingState:(const void*)arg2 lineDrawFlags:(unsigned int)arg3;
- (void)p_drawMisspelledWordMarkingsFragment:(const void*)arg1 drawingState:(const void*)arg2;
- (void)p_drawTextInRunsForLine:(struct __CTLine { }*)arg1 fragment:(const void*)arg2 state:(const void*)arg3 tateChuYoko:(bool)arg4 baseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 isFirstLineRef:(bool)arg6;
- (void)p_drawUngrammaticMarkingsFragment:(const void*)arg1 drawingState:(const void*)arg2;
- (void)p_drawWordMarkingsForFragment:(const void*)arg1 color:(id)arg2 ranges:(const void*)arg3 suppressRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 drawingState:(const void*)arg5;
- (bool)p_shouldClipFragment:(const void*)arg1 drawingState:(const void*)arg2 lineDrawFlags:(unsigned int)arg3 updateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)p_strokeLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3;
- (bool)preventClipToColumn;
- (void)setFlipShadows:(bool)arg1;
- (void)setInteriorClippingPath:(id)arg1;
- (void)setPreventClipToColumn:(bool)arg1;
- (void)setViewScale:(double)arg1;
- (double)viewScale;
- (void)willRenderFragmentsWithDrawingState:(const void*)arg1;

@end
