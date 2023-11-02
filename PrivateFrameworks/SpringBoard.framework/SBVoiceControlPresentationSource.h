
@interface SBVoiceControlPresentationSource : NSObject {
    BluetoothDevice * _bluetoothDevice;
    long long  _sourceType;
}

@property (nonatomic, readonly) BluetoothDevice *bluetoothDevice;
@property (nonatomic, readonly) long long sourceType;

+ (id)sourceFromBluetoothDevice:(id)arg1;
+ (id)sourceFromHeadsetButton;
+ (id)sourceFromHomeButton;

- (void).cxx_destruct;
- (id)_initWithSourceType:(long long)arg1;
- (id)bluetoothDevice;
- (long long)sourceType;

@end
