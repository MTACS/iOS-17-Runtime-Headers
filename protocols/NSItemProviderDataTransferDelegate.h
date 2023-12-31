
@protocol NSItemProviderDataTransferDelegate <NSObject>

@required

- (void)itemProvider:(NSItemProvider *)arg1 beganDataTransferTransactionUUID:(NSUUID *)arg2 progress:(NSProgress *)arg3;
- (void)itemProvider:(NSItemProvider *)arg1 finishedDataTransferTransactionUUID:(NSUUID *)arg2;

@end
