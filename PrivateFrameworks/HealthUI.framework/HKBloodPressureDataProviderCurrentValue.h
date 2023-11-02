
@interface HKBloodPressureDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSDate * _date;
    HKQuantity * _diastolicValue;
    HKQuantity * _systolicValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_quantityForType:(id)arg1 correlation:(id)arg2;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)date;
- (id)initWithCorrelation:(id)arg1;
- (id)initWithSystolicValue:(id)arg1 diastolicValue:(id)arg2 date:(id)arg3;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;

@end
