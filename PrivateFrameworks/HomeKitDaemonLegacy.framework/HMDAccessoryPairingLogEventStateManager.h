
@interface HMDAccessoryPairingLogEventStateManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessoryPairingProgressStateTrackerLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessoryPairingRetryMapLock;
    NSDate * _lastPairingEndTime;
    NSMutableDictionary * _pairingProgressStateTracker;
    unsigned long long  _pairingUIState;
    unsigned long long  _previousRecoveryType;
    unsigned long long  _recoveryType;
    NSMutableDictionary * _retryCountMap;
}

@property (nonatomic, retain) NSDate *lastPairingEndTime;
@property (nonatomic, readonly) NSMutableDictionary *pairingProgressStateTracker;
@property (nonatomic) unsigned long long pairingUIState;
@property (nonatomic) unsigned long long previousRecoveryType;
@property (nonatomic) unsigned long long recoveryType;
@property (nonatomic, readonly) NSMutableDictionary *retryCountMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePairingStateProgressNotification:(id)arg1;
- (void)_updateStateOnPairingProgress:(long long)arg1;
- (void)clearPairingProgressStateTrackerForIdentifier:(id)arg1;
- (void)clearRetryCountMap;
- (id)getLastProgressStateForAccessory:(id)arg1;
- (id)getLongestProgressStateForAccessory:(id)arg1;
- (double)getTimeDurationForLongestProgressStateForAccessory:(id)arg1;
- (double)getTimeDurationForProgressStateForIdentifier:(id)arg1 state:(id)arg2;
- (void)incrementRetryCount:(id)arg1;
- (id)init;
- (id)lastPairingEndTime;
- (id)pairingProgressStateTracker;
- (unsigned long long)pairingUIState;
- (unsigned long long)previousRecoveryType;
- (unsigned long long)recoveryType;
- (void)resetStatesForNewAddOperation;
- (unsigned long long)retryCountForIdentifier:(id)arg1;
- (id)retryCountMap;
- (void)setLastPairingEndTime:(id)arg1;
- (void)setPairingUIState:(unsigned long long)arg1;
- (void)setPreviousRecoveryType:(unsigned long long)arg1;
- (void)setRecoveryType:(unsigned long long)arg1;
- (void)startProgressStateTrackerWithDate:(id)arg1 identifier:(id)arg2;
- (void)updateLastPairingProgressStateEventForIdentifier:(id)arg1 withDate:(id)arg2;
- (void)updatePairingProgressState:(id)arg1;
- (void)updateStatesOnResult:(bool)arg1;

@end
