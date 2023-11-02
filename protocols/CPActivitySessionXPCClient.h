
@protocol CPActivitySessionXPCClient

@required

- (void)receivedResourceAtURL:(TUSandboxExtendedURL *)arg1 withMetadata:(NSData *)arg2 fromParticipantWithIdentifier:(unsigned long long)arg3;
- (void)setActivityWithActivity:(TUConversationActivity *)arg1;
- (void)setDataCryptor:(id <CPDataCryptor>)arg1;
- (void)setStateWithState:(long long)arg1 error:(NSError *)arg2;

@end
