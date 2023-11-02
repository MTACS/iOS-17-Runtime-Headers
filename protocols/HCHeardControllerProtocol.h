
@protocol HCHeardControllerProtocol <NSObject>

@required

- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;
- (void)sendClientsMessageWithPayload:(NSDictionary *)arg1 excluding:(HCXPCClient *)arg2;
- (bool)sendMessage:(HCXPCMessage *)arg1 withError:(id*)arg2;
- (void)sendUpdateMessage:(HCXPCMessage *)arg1 forIdentifier:(unsigned long long)arg2;

@end
