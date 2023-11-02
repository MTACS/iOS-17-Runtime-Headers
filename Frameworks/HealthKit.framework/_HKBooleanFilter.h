
@interface _HKBooleanFilter : _HKFilter {
    bool  _value;
}

@property (nonatomic, readonly) bool value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)falseFilter;
+ (bool)supportsSecureCoding;
+ (id)trueFilter;

- (long long)acceptsActivitySummary:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (bool)acceptsWorkoutActivity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
