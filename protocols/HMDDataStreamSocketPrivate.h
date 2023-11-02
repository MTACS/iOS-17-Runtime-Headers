
@protocol HMDDataStreamSocketPrivate <HMDDataStreamSocket>

@required

- (void)closeInitiated;
- (void)closeWithError:(NSError *)arg1;
- (void)handleIncomingData:(NSData *)arg1;

@end
