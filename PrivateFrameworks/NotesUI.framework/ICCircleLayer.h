
@interface ICCircleLayer : CALayer {
    struct CGColor { } * _fillColor;
    struct CGColor { } * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic, retain) struct CGColor { }*fillColor;
@property (nonatomic, retain) struct CGColor { }*strokeColor;
@property double strokeWidth;

- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGColor { }*)fillColor;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeWidth:(double)arg1;
- (struct CGColor { }*)strokeColor;
- (double)strokeWidth;

@end
