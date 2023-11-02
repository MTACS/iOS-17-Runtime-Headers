
@interface PNPWelcomeController : OBWelcomeController {
    long long  _buttonType;
    long long  _controllerType;
    <PNPWelcomeControllerDelegate> * _delegate;
    long long  _deviceType;
    OBTrayButton * _trayButton;
}

@property (nonatomic) long long buttonType;
@property (nonatomic) long long controllerType;
@property (nonatomic) <PNPWelcomeControllerDelegate> *delegate;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) OBTrayButton *trayButton;

+ (id)bundleImageNamed:(id)arg1;
+ (id)controllerWithType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)addButtonWithType:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalSafeAreaInsets;
- (id)bundleImageNamed:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (long long)buttonType;
- (long long)controllerType;
- (id)delegate;
- (long long)deviceType;
- (void)setButtonType:(long long)arg1;
- (void)setControllerType:(long long)arg1;
- (void)setControllerType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setTrayButton:(id)arg1;
- (id)trayButton;

@end
