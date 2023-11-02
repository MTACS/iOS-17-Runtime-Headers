
@interface SBThermalController : NSObject <SBFThermalBlockProvider> {
    unsigned long long  _coldLevel;
    int  _coldToken;
    unsigned long long  _hotLevel;
    int  _hotToken;
    bool  _inSunlight;
    long long  _level;
    SBExternalWifiDefaults * _networkDefaults;
    NSHashTable * _observers;
    NSUUID * _samplingToken;
    SBSecurityDefaults * _securityDefaults;
    unsigned long long  _sunLevel;
    int  _sunToken;
    SBThermalDefaults * _thermalDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInSunlight, nonatomic, readonly) bool inSunlight;
@property (nonatomic, readonly) long long level;
@property (readonly) Class superclass;

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isBlocked;
- (void)_respondToCurrentThermalCondition;
- (void)_setBlocked:(bool)arg1;
- (void)_updateThermalJetsamCPUSamplingState;
- (void)addThermalObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isInSunlight;
- (bool)isThermalBlocked;
- (long long)level;
- (void)removeThermalObserver:(id)arg1;
- (void)startListeningForThermalEvents;

@end
