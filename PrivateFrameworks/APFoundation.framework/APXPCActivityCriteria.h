
@interface APXPCActivityCriteria : NSObject {
    bool  _allowBattery;
    NSDictionary * _customProperties;
    long long  _delay;
    long long  _firstRunInterval;
    long long  _gracePeriod;
    long long  _interval;
    bool  _isCPUIntensive;
    bool  _isRepeating;
    const char * _priority;
    bool  _requireBuddyComplete;
    bool  _requireClassCData;
    bool  _requireSleep;
    bool  _requiresNetworkConnectivity;
}

@property (nonatomic) bool allowBattery;
@property (nonatomic) NSDictionary *customProperties;
@property (nonatomic) long long delay;
@property (nonatomic) long long firstRunInterval;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) long long interval;
@property (nonatomic) bool isCPUIntensive;
@property (nonatomic) bool isRepeating;
@property (nonatomic) const char *priority;
@property (nonatomic) bool requireBuddyComplete;
@property (nonatomic) bool requireClassCData;
@property (nonatomic) bool requireSleep;
@property (nonatomic) bool requiresNetworkConnectivity;

- (bool)allowBattery;
- (id)customProperties;
- (long long)delay;
- (long long)firstRunInterval;
- (long long)gracePeriod;
- (id)init;
- (long long)interval;
- (bool)isCPUIntensive;
- (bool)isRepeating;
- (const char *)priority;
- (bool)requireBuddyComplete;
- (bool)requireClassCData;
- (bool)requireSleep;
- (bool)requiresNetworkConnectivity;
- (void)setAllowBattery:(bool)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)setDelay:(long long)arg1;
- (void)setFirstRunInterval:(long long)arg1;
- (void)setGracePeriod:(long long)arg1;
- (void)setInterval:(long long)arg1;
- (void)setIsCPUIntensive:(bool)arg1;
- (void)setIsRepeating:(bool)arg1;
- (void)setPriority:(const char *)arg1;
- (void)setRequireBuddyComplete:(bool)arg1;
- (void)setRequireClassCData:(bool)arg1;
- (void)setRequireSleep:(bool)arg1;
- (void)setRequiresNetworkConnectivity:(bool)arg1;

@end
