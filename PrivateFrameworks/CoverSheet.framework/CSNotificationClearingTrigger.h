
@interface CSNotificationClearingTrigger : NSObject {
    bool  _authenticated;
    <CSNotificationClearingTriggerDelegate> * _delegate;
    bool  _didDisableCarDNDUntilEndOfDrive;
    bool  _hadNotificationContentAtDisappearance;
    bool  _screenInactive;
    bool  _screenOff;
    bool  _triggerArmed;
    bool  _uiLocked;
}

@property (nonatomic) bool authenticated;
@property (nonatomic) <CSNotificationClearingTriggerDelegate> *delegate;
@property (nonatomic) bool didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) bool hadNotificationContentAtDisappearance;
@property (nonatomic) bool screenInactive;
@property (nonatomic) bool screenOff;
@property (nonatomic) bool triggerArmed;
@property (nonatomic) bool uiLocked;

- (void).cxx_destruct;
- (void)_clearIfNeeded;
- (void)_reset;
- (bool)_shouldArm;
- (bool)_shouldFire;
- (void)_updateTriggerAndClearIfNeeded;
- (bool)_wouldArmForDiscreteParameters;
- (bool)_wouldArmIfNotForDND;
- (bool)_wouldArmIfNotForDNDAndNotificationContent;
- (bool)authenticated;
- (id)delegate;
- (bool)didDisableCarDNDUntilEndOfDrive;
- (bool)hadNotificationContentAtDisappearance;
- (id)initWithDelegate:(id)arg1;
- (bool)screenInactive;
- (bool)screenOff;
- (void)setAuthenticated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDisableCarDNDUntilEndOfDrive:(bool)arg1;
- (void)setHadNotificationContentAtDisappearance:(bool)arg1;
- (void)setScreenInactive:(bool)arg1;
- (void)setScreenOff:(bool)arg1;
- (void)setTriggerArmed:(bool)arg1;
- (void)setUiLocked:(bool)arg1;
- (bool)triggerArmed;
- (bool)uiLocked;

@end
