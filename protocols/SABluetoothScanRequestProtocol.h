
@protocol SABluetoothScanRequestProtocol

@required

- (void)requestBluetoothScanForTypes:(unsigned long long)arg1;
- (void)startBackgroundScanning;
- (void)stopBackgroundScanning;
- (void)stopLongAggressiveScan;

@end
