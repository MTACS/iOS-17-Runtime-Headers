
@interface STUsageReportGraphDataSet : NSObject {
    NSNumber * _average;
    double  _averageAsPercentageOfMax;
    NSArray * _dataPoints;
    unsigned long long  _itemType;
    NSNumber * _max;
    unsigned long long  _timePeriod;
    NSNumber * _total;
}

@property (nonatomic, copy) NSNumber *average;
@property (nonatomic) double averageAsPercentageOfMax;
@property (nonatomic, copy) NSArray *dataPoints;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, copy) NSNumber *max;
@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic, copy) NSNumber *total;

- (void).cxx_destruct;
- (id)average;
- (double)averageAsPercentageOfMax;
- (id)dataPoints;
- (id)initEmptyDataSetWithTimePeriod:(unsigned long long)arg1 referenceDate:(id)arg2;
- (id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 total:(id)arg3 max:(id)arg4 average:(id)arg5 averageAsPercentageOfMax:(double)arg6 dataPoints:(id)arg7;
- (unsigned long long)itemType;
- (id)max;
- (void)setAverage:(id)arg1;
- (void)setAverageAsPercentageOfMax:(double)arg1;
- (void)setDataPoints:(id)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setMax:(id)arg1;
- (void)setTimePeriod:(unsigned long long)arg1;
- (void)setTotal:(id)arg1;
- (unsigned long long)timePeriod;
- (id)total;

@end
