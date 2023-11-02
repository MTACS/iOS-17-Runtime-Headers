
@interface HKGraphSeriesDataBlock : NSObject {
    NSArray * _chartPoints;
    HKValueRange * _yValueRange;
}

@property (nonatomic, copy) NSArray *chartPoints;
@property (nonatomic, readonly) HKValueRange *yValueRange;

+ (id)emptyDataBlock;

- (void).cxx_destruct;
- (id)chartPoints;
- (void)setChartPoints:(id)arg1;
- (id)yValueRange;

@end
