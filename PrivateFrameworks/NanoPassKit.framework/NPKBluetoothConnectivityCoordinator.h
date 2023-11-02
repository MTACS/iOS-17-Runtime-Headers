
@interface NPKBluetoothConnectivityCoordinator : NSObject {
    unsigned long long  _bluetoothAvailableAndEnabled;
    <NPKBluetoothConnectivityCoordinatorDelegate> * _delegate;
}

@property (nonatomic) unsigned long long bluetoothAvailableAndEnabled;
@property (nonatomic) <NPKBluetoothConnectivityCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned long long)bluetoothAvailableAndEnabled;
- (id)delegate;
- (id)init;
- (bool)isBluetoothEnabled;
- (void)setBluetoothAvailableAndEnabled:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end
