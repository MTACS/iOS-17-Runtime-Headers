
@protocol STSXPCClientNotificationListenerProtocol

@required

- (oneway void)alternativeCarrierConnectedWithStatus:(unsigned long long)arg1;
- (oneway void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)arg1;
- (oneway void)dummyStart;
- (oneway void)iso18013ReaderReceive:(NSData *)arg1 sessionDataStatus:(NSNumber *)arg2 status:(NSError *)arg3;
- (oneway void)processCredentialRequestList:(NSArray *)arg1 readerAuthInfo:(ISO18013ReaderAuthInfo *)arg2;
- (oneway void)receivedRawDataFromAlternativeCarrier:(NSData *)arg1 dataPending:(bool)arg2;
- (oneway void)sessionTranscriptGenerated:(NSData *)arg1;
- (oneway void)transactionEndedWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (oneway void)transactionStarted:(unsigned long long)arg1;

@end
