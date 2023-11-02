
@interface TSDBrushStrokeLayoutOptions : NSObject {
    NSArray * _patternOffsetsBySubpath;
    double  _strokeEnd;
    NSArray * _transparencyLayersBySubpath;
}

@property (nonatomic, copy) NSArray *patternOffsetsBySubpath;
@property (nonatomic) double strokeEnd;
@property (nonatomic, copy) NSArray *transparencyLayersBySubpath;

- (void).cxx_destruct;
- (id)init;
- (id)patternOffsetsBySubpath;
- (void)setPatternOffsetsBySubpath:(id)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setTransparencyLayersBySubpath:(id)arg1;
- (double)strokeEnd;
- (id)transparencyLayersBySubpath;

@end
