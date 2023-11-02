
@interface HKBloodPressureSeriesPresentationStyle : NSObject {
    UIColor * _diastolicFillColor;
    UIColor * _diastolicSymbolColor;
    UIColor * _systolicFillColor;
    UIColor * _systolicSymbolColor;
    double  _width;
}

@property (nonatomic, retain) UIColor *diastolicFillColor;
@property (nonatomic, retain) UIColor *diastolicSymbolColor;
@property (nonatomic, retain) UIColor *systolicFillColor;
@property (nonatomic, retain) UIColor *systolicSymbolColor;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)diastolicFillColor;
- (id)diastolicSymbolColor;
- (void)setDiastolicFillColor:(id)arg1;
- (void)setDiastolicSymbolColor:(id)arg1;
- (void)setSystolicFillColor:(id)arg1;
- (void)setSystolicSymbolColor:(id)arg1;
- (void)setWidth:(double)arg1;
- (id)systolicFillColor;
- (id)systolicSymbolColor;
- (double)width;

@end
