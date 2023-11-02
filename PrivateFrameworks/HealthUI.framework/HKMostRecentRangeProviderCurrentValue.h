
@interface HKMostRecentRangeProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSDate * _date;
    bool  _isSingleValue;
    HKQuantity * _maximumValue;
    HKQuantity * _minimumValue;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)date;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 date:(id)arg3;
- (void)setDate:(id)arg1;

@end
