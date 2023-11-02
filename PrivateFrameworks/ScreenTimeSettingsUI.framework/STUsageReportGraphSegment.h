
@interface STUsageReportGraphSegment : NSObject {
    NSNumber * _amount;
    double  _amountAsPercentageOfDataPointTotal;
    UIColor * _color;
}

@property (nonatomic, copy) NSNumber *amount;
@property (nonatomic) double amountAsPercentageOfDataPointTotal;
@property (nonatomic, retain) UIColor *color;

- (void).cxx_destruct;
- (id)amount;
- (double)amountAsPercentageOfDataPointTotal;
- (id)color;
- (id)initWithAmount:(id)arg1 amountAsPercentageOfDataPointTotal:(double)arg2 color:(id)arg3;
- (void)setAmount:(id)arg1;
- (void)setAmountAsPercentageOfDataPointTotal:(double)arg1;
- (void)setColor:(id)arg1;

@end
