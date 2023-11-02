
@interface _HKObjectComparisonFilter : _HKComparisonFilter {
    bool  _compareForLocalDevice;
    NSString * _devicePropertyName;
    NSString * _metadataKey;
}

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)allowsEmptyContainerValuesForKeyPath:(id)arg1;
+ (bool)allowsEmptyDataTypesSetForKeyPath:(id)arg1;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (bool)isSupportedDevicePropertyKey:(id)arg1;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (bool)_acceptsDataObjectComparingDeviceProperty:(id)arg1;
- (bool)_acceptsDataObjectWithAppleWatchSource:(id)arg1;
- (bool)_acceptsDataObjectWithContributor:(id)arg1;
- (bool)_acceptsDataObjectWithCreationTime:(double)arg1;
- (bool)_acceptsDataObjectWithMetadata:(id)arg1;
- (bool)_acceptsDataObjectWithSource:(id)arg1;
- (bool)_acceptsDataObjectWithValue:(id)arg1;
- (void)_configureForKeyPathDeviceProperty;
- (void)_configureForKeyPathSource;
- (void)_configureForMetdataKeyPath;
- (bool)acceptsDataObject:(id)arg1;
- (void)configureInMemoryFilter;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end
