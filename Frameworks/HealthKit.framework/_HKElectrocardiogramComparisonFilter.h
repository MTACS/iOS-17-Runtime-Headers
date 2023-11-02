
@interface _HKElectrocardiogramComparisonFilter : _HKComparisonFilter

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5;

- (bool)_acceptsECGWithAverageHeartRate:(id)arg1;
- (bool)_acceptsECGWithPrivateClassification:(unsigned long long)arg1;
- (bool)_acceptsECGWithPublicClassification:(long long)arg1;
- (bool)_acceptsECGWithSymptomsStatus:(long long)arg1;
- (bool)acceptsDataObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
