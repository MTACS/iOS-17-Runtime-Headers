
@interface HDMCRecentBasalBodyTemperatureRange : NSObject <NSCopying> {
    HKQuantity * _lowerQuantile;
    HKQuantity * _median;
    HKQuantity * _upperQuantile;
}

@property (nonatomic, readonly, copy) HKQuantity *lowerQuantile;
@property (nonatomic, readonly, copy) HKQuantity *median;
@property (nonatomic, readonly, copy) HKQuantity *upperQuantile;

- (void).cxx_destruct;
- (id)_initWithUpperQuantileValue:(double)arg1 medianValue:(double)arg2 lowerQuantileValue:(double)arg3 unit:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lowerQuantile;
- (id)median;
- (id)recentBasalBodyTemperatureWithMostRecentQuantity:(id)arg1;
- (id)upperQuantile;

@end
