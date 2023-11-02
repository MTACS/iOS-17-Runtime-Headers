
@interface SBSOSClawGestureObserver : NSObject <SBVolumePressBandit, SOSManagerClientObserver> {
    NSMutableDictionary * _activePressTypeToDownTimestamp;
    NSMutableSet * _activePressTypes;
    <SBSOSClawGestureObserverDelegate> * _delegate;
    bool  _gestureLoggingEnabled;
    SBSOSDefaults * _sosDefaults;
    bool  _sosEnabled;
    SOSManager * _sosManager;
    BSAbsoluteMachTimer * _sosTriggerTimer;
    bool  _wasSOSTiggeredByClaw;
    SBMainWorkspace * _workspace;
}

@property (nonatomic, retain) NSMutableSet *activePressTypes;
@property (getter=_isAutomaticCallCountdownEnabled, nonatomic, readonly) bool autoCallCountdownEnabled;
@property (getter=isClawActivated, nonatomic, readonly) bool clawActivated;
@property (getter=_isClawGestureActive, nonatomic, readonly) bool clawGestureActive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSOSClawGestureObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isGestureLoggingEnabled, nonatomic) bool gestureLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (getter=_isSOSActivated, nonatomic, readonly) bool sosActivated;
@property (setter=_setSOSDefaults:, nonatomic, retain) SBSOSDefaults *sosDefaults;
@property (getter=isSOSEnabled, setter=setSOSEnabled:, nonatomic) bool sosEnabled;
@property (nonatomic, retain) BSAbsoluteMachTimer *sosTriggerTimer;
@property (readonly) Class superclass;
@property (getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:, nonatomic) bool wasSOSTiggeredByClaw;

- (void).cxx_destruct;
- (void)_cancelSOSActivity;
- (id)_currentSOSButtonPressState;
- (id)_initWithSOSManager:(id)arg1 workspace:(id)arg2;
- (bool)_isAutomaticCallCountdownEnabled;
- (bool)_isClawGestureActive;
- (bool)_isSOSActivated;
- (void)_presentSOSInterface;
- (void)_setSOSDefaults:(id)arg1;
- (void)_setWasSOSTriggeredByClaw:(bool)arg1;
- (void)_updateActivePressesForPressType:(long long)arg1 down:(bool)arg2 timestamp:(double)arg3;
- (bool)_wasSOSTriggeredByClaw;
- (id)activePressTypes;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (bool)isClawActivated;
- (bool)isGestureLoggingEnabled;
- (bool)isSOSEnabled;
- (void)noteButtonPress:(long long)arg1 isDown:(bool)arg2;
- (void)noteGestureReset;
- (void)setActivePressTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureLoggingEnabled:(bool)arg1;
- (void)setSOSEnabled:(bool)arg1;
- (void)setSosTriggerTimer:(id)arg1;
- (id)sosDefaults;
- (id)sosTriggerTimer;

@end
