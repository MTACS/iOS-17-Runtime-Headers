
@interface SiriBluetoothDeviceSource : SiriLongPressButtonSource {
    long long  _buttonIdentifier;
    SiriBluetoothContext * _context;
    double  _longPressInterval;
}

@property (nonatomic) long long buttonIdentifier;
@property (nonatomic, retain) SiriBluetoothContext *context;
@property (nonatomic) double longPressInterval;

+ (id)bluetoothDeviceForIdentifier:(long long)arg1 bluetoothDevice:(id)arg2;

- (void).cxx_destruct;
- (void)activate;
- (long long)buttonIdentifier;
- (id)context;
- (void)deactivate;
- (double)longPressInterval;
- (void)setButtonIdentifier:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setLongPressInterval:(double)arg1;

@end
