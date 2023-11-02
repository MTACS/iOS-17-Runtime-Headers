
@interface TCVegaCGLinearGradient : NSObject <TCVegaCGGradientInterface> {
    NSMutableArray * _colorStops;
    double  _x0;
    double  _x1;
    double  _y0;
    double  _y1;
}

- (void).cxx_destruct;
- (void)addColorStopWithOffset:(double)arg1 color:(id)arg2;
- (void)fillWithContext:(struct CGContext { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;

@end
