
@interface SBPieChartSlice : NSObject {
    UIColor * _fillColor;
    double  _value;
}

@property (readonly) UIColor *fillColor;
@property (readonly) double value;

+ (id)sliceWithValue:(double)arg1 fillColor:(id)arg2;

- (void).cxx_destruct;
- (id)fillColor;
- (id)initWithValue:(double)arg1 fillColor:(id)arg2;
- (double)value;

@end
