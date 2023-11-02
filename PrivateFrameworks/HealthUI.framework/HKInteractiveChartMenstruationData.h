
@interface HKInteractiveChartMenstruationData : NSObject <HKGraphSeriesChartData> {
    NSDate * _date;
    bool  _startOfCycle;
    long long  _value;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool startOfCycle;
@property (readonly) Class superclass;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (id)date;
- (void)setDate:(id)arg1;
- (void)setStartOfCycle:(bool)arg1;
- (void)setValue:(long long)arg1;
- (bool)startOfCycle;
- (long long)value;

@end
