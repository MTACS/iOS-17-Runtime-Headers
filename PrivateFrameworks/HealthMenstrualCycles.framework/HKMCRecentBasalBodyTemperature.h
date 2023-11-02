
@interface HKMCRecentBasalBodyTemperature : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _lowerQuantile;
    HKQuantity * _median;
    HKQuantity * _mostRecent;
    HKQuantity * _upperQuantile;
}

@property (nonatomic, readonly, copy) HKQuantity *lowerQuantile;
@property (nonatomic, readonly, copy) HKQuantity *median;
@property (nonatomic, readonly, copy) HKQuantity *mostRecent;
@property (nonatomic, readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly, copy) HKQuantity *upperQuantile;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMostRecent:(id)arg1 upperQuantile:(id)arg2 median:(id)arg3 lowerQuantile:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lowerQuantile;
- (id)median;
- (id)mostRecent;
- (id)shortDescription;
- (id)upperQuantile;

@end
