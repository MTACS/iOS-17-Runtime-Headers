
@interface PowerUIChargingController : NSObject {
    int  _chargingStateNotification;
    unsigned long long  _currentControllerClientState;
    unsigned long long  _lastChargingStatus;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _stateDescriptions;
}

@property (nonatomic) int chargingStateNotification;
@property (nonatomic) unsigned long long currentControllerClientState;
@property (nonatomic) unsigned long long lastChargingStatus;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDictionary *stateDescriptions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)chargingStateNotification;
- (unsigned long long)currentControllerClientState;
- (bool)disableCharging;
- (bool)disableChargingWithClientState:(unsigned long long)arg1;
- (bool)enableCharging;
- (bool)enableChargingWithClientState:(unsigned long long)arg1;
- (id)init;
- (struct PowerUIControllerChargingStatus { bool x1; bool x2; })lastChargeStatus;
- (unsigned long long)lastChargingStatus;
- (id)log;
- (void)overrideLastChargingStatus;
- (id)queue;
- (id)readNumberForPreferenceKey:(id)arg1;
- (void)resetState;
- (void)setChargingStateNotification:(int)arg1;
- (bool)setChargingStatus:(bool)arg1;
- (void)setCurrentControllerClientState:(unsigned long long)arg1;
- (void)setLastChargingStatus:(unsigned long long)arg1;
- (void)setLog:(id)arg1;
- (void)setNumber:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setStateDescriptions:(id)arg1;
- (bool)shouldPriortizeDecisionForClientState:(unsigned long long)arg1;
- (id)stateDescriptions;
- (id)status;

@end
