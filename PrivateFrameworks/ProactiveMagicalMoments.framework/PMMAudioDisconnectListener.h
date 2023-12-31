
@interface PMMAudioDisconnectListener : NSObject {
    id /* block */  _disconnectHandler;
}

+ (bool)bluetoothDeviceTypeIsAudio:(id)arg1;

- (void).cxx_destruct;
- (void)_setupAudioDisconnectListener;
- (void)_setupBluetoothDisconnectListener;
- (id)initWithHandler:(id /* block */)arg1;

@end
