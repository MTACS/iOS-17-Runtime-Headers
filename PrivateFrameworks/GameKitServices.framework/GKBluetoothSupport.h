
@interface GKBluetoothSupport : NSObject

+ (Class)_bluetoothManagerClass;
+ (void)_btPowerStateChanged:(id)arg1;
+ (int)_determineBluetoothStatus;
+ (int)_directBTStatus;
+ (int)bluetoothStatus;
+ (void)cleanup;
+ (void)turnBluetoothOn;

@end
