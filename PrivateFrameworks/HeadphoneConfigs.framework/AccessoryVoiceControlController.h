
@interface AccessoryVoiceControlController : PSListController {
    BTSDevice * _currentDevice;
    bool  _dismissed;
    bool  _setEnableVolumeControlAtStart;
    bool  _volumeControlEnabled;
    NSMutableArray * _volumeControlSpecifiers;
}

- (void).cxx_destruct;
- (id)clickHoldModeLeft;
- (id)clickHoldModeRight;
- (void)dealloc;
- (void)deviceDisconnectedHandler:(id)arg1;
- (void)deviceRemoved:(id)arg1;
- (void)dismissPressAndHold;
- (id)getVolumeControlEnabled:(id)arg1;
- (id)init;
- (bool)isVolumeControlEnabled;
- (void)powerChangedHandler:(id)arg1;
- (void)setGestureMode:(id)arg1 specifier:(id)arg2;
- (void)setVolumeControlEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
