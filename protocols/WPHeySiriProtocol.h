
@protocol WPHeySiriProtocol <NSObject>

@required

- (void)heySiriDidUpdateState:(WPHeySiri *)arg1;

@optional

- (void)heySiri:(WPHeySiri *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)heySiri:(WPHeySiri *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)heySiri:(WPHeySiri *)arg1 foundDevice:(NSUUID *)arg2 withInfo:(NSDictionary *)arg3;
- (void)heySiriAdvertisingPending:(WPHeySiri *)arg1;
- (void)heySiriStartedAdvertising:(WPHeySiri *)arg1;
- (void)heySiriStartedAdvertisingAt:(WPHeySiri *)arg1 timeStamp:(unsigned long long)arg2;
- (void)heySiriStartedScanning:(WPHeySiri *)arg1;
- (void)heySiriStoppedAdvertising:(WPHeySiri *)arg1;
- (void)heySiriStoppedScanning:(WPHeySiri *)arg1;

@end
