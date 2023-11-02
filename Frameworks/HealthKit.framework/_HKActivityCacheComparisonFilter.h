
@interface _HKActivityCacheComparisonFilter : _HKComparisonFilter {
    long long  _cacheIndex;
}

@property (nonatomic, readonly) long long cacheIndex;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (id)filterWithOperatorType:(unsigned long long)arg1 cacheIndex:(long long)arg2;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5;

- (bool)acceptsDataObject:(id)arg1;
- (long long)cacheIndex;
- (void)configureInMemoryFilter;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)filterIgnoringActivityCacheIndexFilter;
- (id)predicateWithProfile:(id)arg1;

@end
