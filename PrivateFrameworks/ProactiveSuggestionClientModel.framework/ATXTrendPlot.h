
@interface ATXTrendPlot : NSObject {
    NSArray * _bins;
    long long  _granularity;
}

@property (nonatomic, readonly) NSArray *bins;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long granularity;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (unsigned long long)_binIndexForDate:(id)arg1;
- (id)_dateComponentsForGranularity:(long long)arg1;
- (id)binAtDate:(id)arg1;
- (id)bins;
- (id)endDate;
- (long long)granularity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 granularity:(long long)arg3 binInitialDataProvider:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXTrendPlot:(id)arg1;
- (id)startDate;

@end
