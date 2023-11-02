
@interface HKElectrocardiogramGridOptions : NSObject {
    unsigned long long  _axis;
    UIColor * _lineColor;
    double  _lineWidth;
    unsigned long long  _unitMultiple;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } scale;
@property (nonatomic) unsigned long long unitMultiple;

- (void).cxx_destruct;
- (unsigned long long)axis;
- (id)initWithUnitMultiple:(long long)arg1 axis:(unsigned long long)arg2 lineColor:(id)arg3 lineWidth:(double)arg4;
- (id)lineColor;
- (double)lineWidth;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })scale;
- (void)setAxis:(unsigned long long)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setUnitMultiple:(unsigned long long)arg1;
- (unsigned long long)unitMultiple;

@end