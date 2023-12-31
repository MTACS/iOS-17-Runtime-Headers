
@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource> {
    double  mOutsetFrom;
    double  mOutsetTo;
    int  mType;
}

@property (readonly) unsigned long long numberOfControlKnobs;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;
@property (nonatomic) int type;

+ (id)pathSourceAtAngleOfSize:(struct CGSize { double x1; double x2; })arg1 forType:(int)arg2;
+ (id)pathSourceOfLength:(double)arg1;

- (void)bend;
- (id)bezierPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })fixedPointForControlKnobChange;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (id)initWithBezierPath:(id)arg1;
- (bool)isCircular;
- (bool)isLineSegment;
- (bool)isRectangular;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (double)outsetFrom;
- (double)outsetTo;
- (void)p_setBezierPath:(id)arg1;
- (long long)pathElementIndexForKnobTag:(unsigned long long)arg1;
- (void)scaleToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setOutsetFrom:(double)arg1;
- (void)setOutsetTo:(double)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
