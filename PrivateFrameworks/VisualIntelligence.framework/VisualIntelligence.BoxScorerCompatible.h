
@interface VisualIntelligence.BoxScorerCompatible : NSObject {
    void boxScorer;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithGranularity:(long long)arg1 xMean:(double)arg2 yMean:(double)arg3 std:(double)arg4;
- (double)scoreWithXTopLeft:(double)arg1 yTopLeft:(double)arg2 width:(double)arg3 height:(double)arg4;

@end
