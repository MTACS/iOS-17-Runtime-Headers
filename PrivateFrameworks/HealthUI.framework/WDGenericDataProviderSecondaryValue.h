
@interface WDGenericDataProviderSecondaryValue : NSObject <HKDataProviderValue> {
    NSNumber * _average;
    NSDate * _date;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)date;
- (id)initWithAverage:(id)arg1;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (void)setDate:(id)arg1;

@end
