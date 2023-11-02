
@protocol WPTransferDelegate <NSObject>

@required

- (void)transferComplete;
- (void)transferDidFailToStartAdvertising:(NSError *)arg1;
- (void)transferDidFailToStartScanning:(NSError *)arg1;
- (void)transferDidFailWithError:(NSError *)arg1;
- (NSData *)transferDidReceiveData:(NSData *)arg1;
- (void)transferDidUpdateAdvertiserState:(WPTransfer *)arg1;
- (void)transferDidUpdateScannerState:(WPTransfer *)arg1;

@end
