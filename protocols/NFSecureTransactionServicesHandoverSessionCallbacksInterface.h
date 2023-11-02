
@protocol NFSecureTransactionServicesHandoverSessionCallbacksInterface <NFSecureTransactionServicesHandoverBaseSessionCallbacksInterface, NFTNEPCallbackProtocol>

@required

- (void)connectionHandoverProcessCompleted;
- (void)connectionHandoverProcessFailure:(NSError *)arg1;
- (void)connectionHandoverTNEPServiceSelected:(NSString *)arg1;

@end
