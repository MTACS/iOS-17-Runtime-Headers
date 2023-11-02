
@interface PNPAirplaneModeView : UIView <PNPDeviceStateConfigurable> {
    <PNPAirplaneModeBluetoothViewDelegate> * _bluetoothDelegate;
    UIView * _contentAreaView;
    NSString * _currentString;
    UILabel * _deviceNameLabel;
    PNPDeviceState * _deviceState;
    NSString * _pencilStatusString;
    UIButton * _turnOnBluetoothButton;
}

@property (nonatomic) <PNPAirplaneModeBluetoothViewDelegate> *bluetoothDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applePencilOff;
- (id)_applePencilOn;
- (id)_bluetoothOnString;
- (void)_configureConstraints;
- (id)_turnOnString;
- (id)bluetoothDelegate;
- (id)deviceState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBluetoothDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)turnOnBluetooth:(id)arg1;

@end
