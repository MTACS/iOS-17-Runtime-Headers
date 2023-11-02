
@interface _HKComparisonFilter : _HKFilter <HKComparisonFilter, _HKFilterBuilding> {
    unsigned int  _applicationSDKVersion;
    NSSet * _dataTypes;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasBeenConfiguredFlag;
    NSString * _keyPath;
    long long  _keyPathIntegerValue;
    unsigned long long  _operatorType;
    id  _value;
}

@property (nonatomic, readonly) unsigned int applicationSDKVersion;
@property (nonatomic, readonly, copy) NSSet *dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) long long keyPathIntegerValue;
@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly, copy) NSString *propertyForKeyPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_filterForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 applicationSDKVersion:(unsigned int)arg5 isSubpredicate:(bool)arg6;
+ (bool)_isValidValue:(id)arg1 forKeyPath:(id)arg2 allowedClases:(id)arg3 error:(id*)arg4;
+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)allowsEmptyContainerValuesForKeyPath:(id)arg1;
+ (bool)allowsEmptyDataTypesSetForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (id)filterForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 isSubpredicate:(bool)arg5;
+ (bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5;
+ (bool)requiresSubpredicate;
+ (bool)supportsKeyPath:(id)arg1 forTypes:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 applicationSDKVersion:(unsigned int)arg5;
- (unsigned int)applicationSDKVersion;
- (void)configureInMemoryFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (long long)keyPathIntegerValue;
- (unsigned long long)operatorType;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)builder_filterWithDataTypes:(id)arg1;
- (id)propertyForKeyPath;
- (id)simplePredicate;

@end
