
@interface _HKWorkoutComparisonFilter : _HKComparisonFilter {
    HKQuantityType * _quantityType;
    _HKFilter * _subFilter;
}

@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (nonatomic, readonly, copy) _HKFilter *subFilter;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_quantityTypeFromKeyPath:(id)arg1 prefix:(id)arg2;
+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (bool)_acceptsWorkoutWithActivities:(id)arg1;
- (bool)_acceptsWorkoutWithActivityType:(unsigned long long)arg1;
- (bool)_acceptsWorkoutWithDuration:(double)arg1;
- (bool)_acceptsWorkoutWithGoalType:(unsigned long long)arg1;
- (bool)_acceptsWorkoutWithQuantity:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (void)configureInMemoryFilter;
- (id)quantityType;
- (id)subFilter;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
