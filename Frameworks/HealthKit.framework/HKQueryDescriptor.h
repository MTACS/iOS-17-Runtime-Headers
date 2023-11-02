
@interface HKQueryDescriptor : NSObject <NSCopying, NSSecureCoding> {
    _HKFilter * _filter;
    NSPredicate * _predicate;
    HKSampleType * _sampleType;
}

@property (getter=_filter, nonatomic, readonly) _HKFilter *filter;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly, copy) HKSampleType *sampleType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allergiesDescriptions;
+ (id)allergiesDescriptionsWithPredicate:(id)arg1;
+ (id)clinicalNotesDescriptions;
+ (id)clinicalNotesDescriptionsWithPredicate:(id)arg1;
+ (id)conditionsDescriptions;
+ (id)conditionsDescriptionsWithPredicate:(id)arg1;
+ (id)coverageDescriptions;
+ (id)coverageDescriptionsWithPredicate:(id)arg1;
+ (id)immunizationsDescriptions;
+ (id)immunizationsDescriptionsWithPredicate:(id)arg1;
+ (id)labsDescriptions;
+ (id)labsDescriptionsWithPredicate:(id)arg1;
+ (id)medicalRecordDescriptionsWithPredicate:(id)arg1 futureMigrationsEnabled:(bool)arg2;
+ (id)medicationsDescriptions;
+ (id)medicationsDescriptionsWithPredicate:(id)arg1;
+ (id)proceduresDescriptions;
+ (id)proceduresDescriptionsWithPredicate:(id)arg1;
+ (id)queryDescriptorWithSampleType:(id)arg1;
+ (id)queryDescriptorWithSampleType:(id)arg1 predicate:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)vitalsDescriptions;
+ (id)vitalsDescriptionsWithPredicate:(id)arg1;

- (void).cxx_destruct;
- (id)_filter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)sampleType;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_descriptorsForTypes:(id)arg1 predicate:(id)arg2;

@end
