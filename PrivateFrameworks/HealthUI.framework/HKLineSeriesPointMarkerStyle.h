
@interface HKLineSeriesPointMarkerStyle : NSObject {
    UIColor * _pointColor;
    long long  _pointMarkerStyle;
    double  _radius;
}

@property (nonatomic, retain) UIColor *pointColor;
@property (nonatomic) long long pointMarkerStyle;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3;
- (id)pointColor;
- (long long)pointMarkerStyle;
- (double)radius;
- (void)setPointColor:(id)arg1;
- (void)setPointMarkerStyle:(long long)arg1;
- (void)setRadius:(double)arg1;

@end
