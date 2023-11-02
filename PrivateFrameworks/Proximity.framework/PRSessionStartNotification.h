
@interface PRSessionStartNotification : NSObject {
    NSNumber * _bluetoothConnectionEventCounterValue;
    long long  _notificationType;
}

@property (readonly) NSNumber *bluetoothConnectionEventCounterValue;
@property (readonly) long long notificationType;

+ (id)createWithBluetoothConnectionEventCounterValue:(id)arg1;

- (void).cxx_destruct;
- (void)_setBluetoothConnectionEventCounterValue:(id)arg1;
- (void)_setType:(long long)arg1;
- (id)bluetoothConnectionEventCounterValue;
- (id)init;
- (long long)notificationType;

@end
