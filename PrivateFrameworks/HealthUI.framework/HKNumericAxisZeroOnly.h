
@interface HKNumericAxisZeroOnly : HKNumericAxis {
    NSString * _zeroLabel;
}

@property (nonatomic, readonly) NSString *zeroLabel;

- (void).cxx_destruct;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithZeroLabel:(id)arg1 axisConfiguration:(id)arg2;
- (id)zeroLabel;

@end
