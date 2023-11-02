
@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods> {
    NSArray * _destinationDevices;
    NSArray * _featurePolicies;
    bool  _isOnPower;
    bool  _isSingleDevice;
    long long  _mask;
    NSDictionary * _properties;
    NSArray * _sourceDevices;
    bool  _syncDisabled;
    NSArray * _transportPolicies;
    unsigned long long  _triggeredSyncDelayInSeconds;
    NSNumber * _version;
}

@property (nonatomic, retain) NSDictionary *properties;

+ (void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3;
+ (void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2;
+ (bool)cloudSyncDisabled;
+ (id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3;
+ (id)computedPolicyDictionary;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)disabledPolicy;
+ (void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (void)overrideDictionary:(id)arg1 withOverrides:(id)arg2;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)productVersion;
+ (bool)rapportSyncDisabled;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (id)userDefaults;

- (void).cxx_destruct;
- (bool)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(id /* block */)arg2;
- (unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(bool)arg3;
- (unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(bool)arg3;
- (id)description;
- (id)init;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
