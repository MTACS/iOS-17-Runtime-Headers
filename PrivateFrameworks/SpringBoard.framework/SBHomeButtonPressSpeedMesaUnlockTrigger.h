
@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    bool  _bioUnlockOccurred;
    bool  _buttonIsDown;
    bool  _fingerIsOn;
    double  _slowPressDuration;
    BSAbsoluteMachTimer * _slowPressTimer;
    bool  _timerFired;
}

@property (nonatomic) double slowPressDuration;

- (void).cxx_destruct;
- (void)_evaluateUnlock;
- (void)_invalidateTimer;
- (bool)_isPrimed;
- (bool)_isTimerRunning;
- (void)_startTimer;
- (void)_timerFired;
- (bool)bioUnlock;
- (void)dealloc;
- (id)description;
- (void)fingerOff;
- (id)init;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)screenOff;
- (void)setSlowPressDuration:(double)arg1;
- (double)slowPressDuration;
- (id)succinctDescriptionBuilder;

@end
