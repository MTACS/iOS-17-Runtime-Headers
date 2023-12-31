
@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {
    bool  mDrawArrows;
    unsigned long long  mSegmentCount;
    unsigned long long  mSegmentIndex;
    double  mStartAngle;
    double  mStopAngle;
}

- (id)_arrowFillWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setDrawArrows:(bool)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;
- (void)setSegmentIndex:(unsigned long long)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setStopAngle:(double)arg1;
- (id)transformPresentationName;

@end
