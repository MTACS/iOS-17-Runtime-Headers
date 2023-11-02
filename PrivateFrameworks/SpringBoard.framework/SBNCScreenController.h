
@interface SBNCScreenController : NSObject <CMPocketStateDelegate, SBIdleTimerResetSource> {
    SBBacklightController * _backlightController;
    SBLockScreenManager * _lockScreenManager;
    SBLockStateAggregator * _lockStateAggregator;
    CMPocketStateManager * _pocketStateManager;
    unsigned int  _powerAssertionID;
    NSString * _powerAssertionName;
    bool  _turnOnScreenForOutOfPocketEvent;
}

@property (nonatomic, retain) SBBacklightController *backlightController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) SBLockStateAggregator *lockStateAggregator;
@property (nonatomic, retain) CMPocketStateManager *pocketStateManager;
@property (nonatomic) unsigned int powerAssertionID;
@property (nonatomic, copy) NSString *powerAssertionName;
@property (readonly) Class superclass;
@property (nonatomic) bool turnOnScreenForOutOfPocketEvent;

- (void).cxx_destruct;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (void)_createOrResetPowerAssertionWithTimeout:(double)arg1;
- (bool)_isDeviceUILocked;
- (void)_releasePowerAssertion;
- (void)_turnOnScreen;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)arg1;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (void)_turnOnScreenForPocketMode;
- (id)backlightController;
- (bool)canTurnOnScreenForNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithBackLightController:(id)arg1 lockScreenManager:(id)arg2 lockStateAggregator:(id)arg3;
- (id)lockScreenManager;
- (id)lockStateAggregator;
- (id)pocketStateManager;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (unsigned int)powerAssertionID;
- (id)powerAssertionName;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (void)setBacklightController:(id)arg1;
- (void)setLockScreenManager:(id)arg1;
- (void)setLockStateAggregator:(id)arg1;
- (void)setPocketStateManager:(id)arg1;
- (void)setPowerAssertionID:(unsigned int)arg1;
- (void)setPowerAssertionName:(id)arg1;
- (void)setTurnOnScreenForOutOfPocketEvent:(bool)arg1;
- (void)turnOnScreenForNotificationRequest:(id)arg1;
- (bool)turnOnScreenForOutOfPocketEvent;
- (void)turnOnScreenIfPossibleForNotificationRequest:(id)arg1;

@end
