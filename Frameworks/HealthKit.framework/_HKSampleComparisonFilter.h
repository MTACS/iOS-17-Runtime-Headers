
@interface _HKSampleComparisonFilter : _HKComparisonFilter {
    HKSampleType * _anySampleType;
    double  _comparisonTime;
}

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)allowsEmptyDataTypesSetForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (id)endDateFilterWithOperatorType:(unsigned long long)arg1 date:(id)arg2 dataTypes:(id)arg3;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (id)startDateFilterWithOperatorType:(unsigned long long)arg1 date:(id)arg2 dataTypes:(id)arg3;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (void)configureInMemoryFilter;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
