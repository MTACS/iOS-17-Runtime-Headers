
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {
    TIHandwritingStrokes * _strokes;
}

@property (nonatomic, retain) TIHandwritingStrokes *strokes;

- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (void)clear;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)scaleStrokes:(double)arg1;
- (void)setStrokes:(id)arg1;
- (id)strokes;

@end
