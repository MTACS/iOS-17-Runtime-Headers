
@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding> {
    long long  _overriddenAggregationStyle;
    HKUnit * _overriddenCanonicalUnit;
    HKSampleType * _underlyingSampleType;
}

@property (nonatomic, readonly) long long overriddenAggregationStyle;
@property (nonatomic, readonly, copy) HKUnit *overriddenCanonicalUnit;
@property (nonatomic, readonly, copy) HKSampleType *underlyingSampleType;

+ (bool)supportsSecureCoding;
+ (id)syntheticQuantityTypeWithConfigurationProviding:(id)arg1;
+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3;

- (void).cxx_destruct;
- (long long)aggregationStyle;
- (id)canonicalUnit;
- (Class)dataObjectClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)overriddenAggregationStyle;
- (id)overriddenCanonicalUnit;
- (id)underlyingSampleType;

@end
