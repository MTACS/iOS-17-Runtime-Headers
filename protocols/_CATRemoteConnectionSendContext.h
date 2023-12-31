
@protocol _CATRemoteConnectionSendContext <NSObject>

@required

- (NSData *)bufferedDataWithError:(id*)arg1;
- (unsigned long long)bytesWritten;
- (unsigned long long)clientBytesWritten;
- (bool)hasBytesRemaining;
- (void)setBytesWritten:(unsigned long long)arg1;
- (id)userInfo;

@end
