
@interface TPSBluetoothChecker : NSObject {
    BluetoothManager * _bluetoothManager;
    CBCentralManager * _centralManager;
    NSObject<OS_dispatch_queue> * _peersAccessQueue;
}

@property (nonatomic, retain) BluetoothManager *bluetoothManager;
@property (nonatomic, retain) CBCentralManager *centralManager;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) NSArray *pairedPeers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *peersAccessQueue;

+ (bool)bluetoothPairedForProductID:(unsigned int)arg1 minimumVersion:(id)arg2 withPairedDevices:(id)arg3;
+ (bool)bluetoothPairedForProductID:(unsigned int)arg1 withPairedDevices:(id)arg2;
+ (id)bluetoothPairedForProductIDs:(id)arg1 minimumVersion:(id)arg2 withPairedDevices:(id)arg3;
+ (id)bluetoothPairedForProductIDs:(id)arg1 withPairedDevices:(id)arg2;
+ (bool)bluetoothPairedWithTag:(id)arg1 withPairedPeers:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bluetoothManager;
- (bool)bluetoothPairedForProductID:(unsigned int)arg1;
- (bool)bluetoothPairedForProductID:(unsigned int)arg1 minimumVersion:(id)arg2;
- (bool)bluetoothPairedWithTag:(id)arg1;
- (id)centralManager;
- (id)devicesAccessQueue;
- (id)init;
- (void)initializeBTManager;
- (id)pairedDevices;
- (id)pairedPeers;
- (id)peersAccessQueue;
- (void)setBluetoothManager:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setPeersAccessQueue:(id)arg1;

@end
