
@interface CHPointStrokeFIFO : CHPointFIFO {
    CHDrawing * _drawing;
    CHDrawing * _strokes;
}

@property (nonatomic, retain) CHDrawing *drawing;
@property (nonatomic, retain) CHDrawing *strokes;

- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (id)drawing;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setStrokes:(id)arg1;
- (id)strokes;

@end
