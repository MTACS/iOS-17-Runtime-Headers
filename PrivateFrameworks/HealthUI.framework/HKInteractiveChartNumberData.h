
@interface HKInteractiveChartNumberData : NSObject <HKGraphSeriesChartData> {
    NSNumberFormatter * _numberFormatter;
    NSNumber * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;

- (void).cxx_destruct;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
