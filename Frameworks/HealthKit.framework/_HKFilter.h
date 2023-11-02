
@interface _HKFilter : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)filter:(id)arg1 acceptsActivitySummary:(id)arg2;
+ (bool)filter:(id)arg1 acceptsDataObject:(id)arg2;
+ (bool)filter:(id)arg1 acceptsDataObjectWithStartTimestamp:(double)arg2 endTimestamp:(double)arg3 valueInCanonicalUnit:(double)arg4;
+ (bool)supportsSecureCoding;

- (long long)acceptsActivitySummary:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (bool)acceptsWorkoutActivity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)filterIgnoringActivityCacheIndexFilter;
- (id)filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end
