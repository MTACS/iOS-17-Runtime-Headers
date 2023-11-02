
@protocol CATIDSServiceConnectionDelegate

@required

- (void)connection:(CATIDSServiceConnection *)arg1 receivedData:(NSData *)arg2;
- (void)connectionClosed:(CATIDSServiceConnection *)arg1;

@end
