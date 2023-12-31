
@interface ICArcLayer : ICCircleLayer {
    bool  _drawClockwise;
    double  _endAngle;
    double  _startAngle;
}

@property (nonatomic) bool drawClockwise;
@property (nonatomic) double endAngle;
@property (nonatomic) double startAngle;

- (bool)drawClockwise;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (double)endAngle;
- (void)setDrawClockwise:(bool)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setStartAngle:(double)arg1;
- (double)startAngle;

@end
