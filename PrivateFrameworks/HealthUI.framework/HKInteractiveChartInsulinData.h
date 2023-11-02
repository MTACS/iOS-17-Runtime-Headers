
@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData> {
    double  _basalValue;
    double  _totalValue;
}

@property (nonatomic) double basalValue;
@property (nonatomic, readonly) double bolusValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double totalValue;

- (double)basalValue;
- (double)bolusValue;
- (void)setBasalValue:(double)arg1;
- (void)setTotalValue:(double)arg1;
- (double)totalValue;

@end
