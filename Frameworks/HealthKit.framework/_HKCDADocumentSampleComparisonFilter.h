
@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {
    NSRegularExpression * _comparisonExpression;
}

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (bool)isSupportedKeyPath:(id)arg1;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (void)configureInMemoryFilter;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;
- (id)propertyForKeyPath;

@end
