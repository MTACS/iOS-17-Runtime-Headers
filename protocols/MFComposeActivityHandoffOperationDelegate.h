
@protocol MFComposeActivityHandoffOperationDelegate <NSObject>

@required

- (void)activityHandoffOperation:(MFComposeActivityHandoffOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)activityHandoffOperation:(MFComposeActivityHandoffOperation *)arg1 didFinishReceivingData:(NSData *)arg2;
- (void)activityHandoffOperation:(MFComposeActivityHandoffOperation *)arg1 didFinishSendingDataWithResult:(long long)arg2;
- (void)activityHandoffOperationReceivedBytes:(MFComposeActivityHandoffOperation *)arg1;

@end
