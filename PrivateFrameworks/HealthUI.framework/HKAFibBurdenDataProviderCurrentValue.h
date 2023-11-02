
@interface HKAFibBurdenDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSDate * _date;
    NSNumber * _maxValue;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)date;
- (id)initWithMaxValue:(id)arg1 date:(id)arg2;
- (void)setDate:(id)arg1;

@end