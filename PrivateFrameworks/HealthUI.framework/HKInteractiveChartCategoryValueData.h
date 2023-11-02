
@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData> {
    NSDate * _endDate;
    NSDate * _startDate;
    long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (id)endDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setValue:(long long)arg1;
- (id)startDate;
- (long long)value;

@end
