
@interface UITextMagnifierTimeWeightedPoint : NSObject {
    int  m_index;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        double time; 
    }  m_points;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } weightedPoint;

- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clearHistory;
- (struct CGPoint { double x1; double x2; })diffFromLastPoint;
- (struct CGSize { double x1; double x2; })displacementInInterval:(double)arg1;
- (struct CGSize { double x1; double x2; })displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (float)distanceCoveredInInterval:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (bool)historyCovers:(double)arg1;
- (bool)isPlacedCarefully;
- (struct CGPoint { double x1; double x2; })weightedPoint;

@end
