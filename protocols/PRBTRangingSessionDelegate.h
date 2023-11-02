
@protocol PRBTRangingSessionDelegate <NSObject>

@required

- (void)didFailWithError:(NSError *)arg1;

@optional

- (void)didConnectDevice:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)didFetchTxPower:(NSNumber *)arg1 fromDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)didReceiveNewBTRSSI:(PRBTRSSI *)arg1;
- (void)didStartRangingOnDevice:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)didStopOwnerRangingOnDevice:(NSUUID *)arg1 withError:(NSError *)arg2;

@end
