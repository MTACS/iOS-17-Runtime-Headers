
@interface PLBackgroundJobCriteria : NSObject <NSCopying> {
    NSString * _activityIdentifier;
    bool  _allowBattery;
    bool  _cpuIntensive;
    long long  _delay;
    long long  _gracePeriod;
    NSString * _name;
    bool  _overrideRateLimiting;
    bool  _requireConcurrencyLimit;
    bool  _requireInexpensiveNetworkConnectivity;
    bool  _requireScreenSleep;
    NSString * _shortCode;
    unsigned long long  _xpcActivityPriority;
}

@property (readonly, copy) NSString *activityIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *shortCode;

+ (id)allKnownCriterias;
+ (id)allKnownShortCodes;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForIncrementalSearchWorker;
+ (id)criteriaForRebuildSearchWorker;
+ (id)criteriaForUrgentResourceWorker;
+ (id)criteriaWithKnownShortCode:(id)arg1;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 shortCode:(id)arg2 xpcActivityPriority:(unsigned long long)arg3 allowBattery:(bool)arg4 gracePeriod:(long long)arg5 delay:(long long)arg6 requireScreenSleep:(bool)arg7 cpuIntensive:(bool)arg8 requireInexpensiveNetworkConnectivity:(bool)arg9 requireConcurrencyLimit:(bool)arg10 overrideRateLimiting:(bool)arg11;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)shortCode;
- (id)xpcCriteria;

@end
