
@interface _HKCompoundFilter : _HKFilter <_HKFilterBuilding> {
    unsigned long long  _compoundPredicateType;
    unsigned long long  _subfilterCount;
    NSArray * _subfilters;
}

@property (nonatomic, readonly) unsigned long long compoundPredicateType;
@property (nonatomic, readonly, copy) NSArray *subfilters;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)andFilterWithSubfilters:(id)arg1;
+ (id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2;
+ (id)notFilterWithSubfilter:(id)arg1;
+ (id)orFilterWithSubfilters:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)acceptsActivitySummary:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (bool)acceptsWorkoutActivity:(id)arg1;
- (unsigned long long)compoundPredicateType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 subfilters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)subfilters;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)builder_filterWithDataTypes:(id)arg1;
- (id)filterIgnoringActivityCacheIndexFilter;
- (id)filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end
