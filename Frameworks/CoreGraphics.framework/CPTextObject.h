
@interface CPTextObject : CPChunk {
    struct CGPoint { 
        double x; 
        double y; 
    }  anchor;
    double  maxFontLineHeight;
    float  maxFontSize;
    bool  metricInfoCalculated;
}

- (void)calculateMetrics;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)translateObjectYBy:(double)arg1;

@end
