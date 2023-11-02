
@interface SASOverriddenSystemState : SASSystemState {
    SiriContextOverride * _contextOverride;
    SASSystemState * _systemState;
}

@property (nonatomic, retain) SiriContextOverride *contextOverride;
@property (nonatomic, retain) SASSystemState *systemState;

- (void).cxx_destruct;
- (bool)accessibilityShortcutEnabled;
- (bool)carDNDActive;
- (id)contextOverride;
- (id)currentSpokenLanguageCode;
- (bool)deviceIsBlocked;
- (bool)deviceIsPasscodeLocked;
- (bool)hasUnlockedSinceBoot;
- (id)initWithSystemState:(id)arg1 contextOverride:(id)arg2;
- (bool)isConnectedToCarPlay;
- (bool)isConnectedToTrustedCarPlay;
- (bool)isPad;
- (id)lockStateMonitor;
- (bool)pocketStateShouldPreventVoiceTrigger;
- (void)setContextOverride:(id)arg1;
- (void)setLockStateMonitor:(id)arg1;
- (void)setSystemState:(id)arg1;
- (bool)siriIsEnabled;
- (bool)siriIsRestricted;
- (bool)siriIsSupported;
- (bool)smartCoverClosed;
- (id)systemState;

@end
