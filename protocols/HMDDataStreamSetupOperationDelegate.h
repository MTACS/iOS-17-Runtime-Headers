
@protocol HMDDataStreamSetupOperationDelegate <NSObject>

@required

- (void)dataStreamSetupOperation:(HMDDataStreamSetupOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)dataStreamSetupOperation:(HMDDataStreamSetupOperation *)arg1 didSucceedWithTransport:(id <HMDDataStreamTransport>)arg2 sessionEncryption:(HAPSecuritySessionEncryption *)arg3;

@end
