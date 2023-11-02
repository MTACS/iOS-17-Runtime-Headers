
@interface HKCardioFitnessDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    long long  _ageInYears;
    long long  _biologicalSex;
    NSDate * _date;
    HKQuantity * _vo2maxQuantity;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)date;
- (id)initWithVO2MaxQuantity:(id)arg1 biologicalSex:(long long)arg2 age:(long long)arg3 date:(id)arg4;
- (void)setDate:(id)arg1;

@end
