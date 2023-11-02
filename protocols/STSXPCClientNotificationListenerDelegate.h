
@protocol STSXPCClientNotificationListenerDelegate

@required

- (void)transactionEndedWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)transactionStarted:(unsigned long long)arg1;
- (void)xpcInterrupted;
- (void)xpcInvalidated;

@optional

- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)arg1;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)arg1;
- (void)alternativeCarrierReceived:(NSData *)arg1 dataPending:(bool)arg2;
- (void)notificationClientConnected;
- (void)processISO18013CredentialProposals:(NSArray *)arg1 readerAuthInfo:(STS18013ReaderAuthInfo *)arg2;
- (void)receiveISO18013DeviceResponse:(NSData *)arg1 sessionDataStatus:(NSNumber *)arg2 status:(NSError *)arg3;
- (void)sessionTranscriptGenerated:(NSData *)arg1;

@end
