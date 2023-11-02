
@interface _HKDiagnosticTestResultComparisonFilter : _HKComparisonFilter

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (bool)isSupportedKeyPath:(id)arg1;

- (bool)_acceptsDiagnosticTestResultWithCategory:(id)arg1;
- (bool)_acceptsDiagnosticTestResultWithReferenceRangeStatus:(long long)arg1;
- (bool)acceptsDataObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;
- (id)propertyForKeyPath;

@end
