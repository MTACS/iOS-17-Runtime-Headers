
@interface SBLockdownManager : NSObject {
    SBDismissOnlyAlertItem * _activatingAlertItem;
    bool  _settingUpActivationState;
    int  _state;
    NSString * _unqiueDeviceIdentifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (bool)brickedDevice;
- (id)init;
- (int)lockdownState;

@end
