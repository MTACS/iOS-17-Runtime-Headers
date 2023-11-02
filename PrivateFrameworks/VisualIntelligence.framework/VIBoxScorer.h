
@interface VIBoxScorer : NSObject {
    _TtC18VisualIntelligence19BoxScorerCompatible * _boxScorer;
}

- (void).cxx_destruct;
- (id)initWithGranularity:(long long)arg1 xMean:(double)arg2 yMean:(double)arg3 std:(double)arg4;
- (double)scoreWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scoreWithXTopLeft:(double)arg1 yTopLeft:(double)arg2 width:(double)arg3 height:(double)arg4;

@end
