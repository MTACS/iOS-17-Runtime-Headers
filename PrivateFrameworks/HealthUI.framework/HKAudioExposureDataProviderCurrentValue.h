
@interface HKAudioExposureDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    unsigned long long  _classification;
    NSDate * _date;
    long long  _daysAggregated;
    HKQuantity * _leqQuantity;
    double  _secondsListened;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedSymbolForClassification:(unsigned long long)arg1 font:(id)arg2;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)date;
- (id)initWithLEQQuantity:(id)arg1 secondsListened:(double)arg2 daysAggregated:(long long)arg3 date:(id)arg4;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)arg1;
- (void)setDate:(id)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;

@end
