
@protocol SKAMessagingProviding <NSObject, SKAIDSDeviceProviding>

@required

- (<SKAMessagingProvidingDelegate> *)delegate;
- (NSData *)deviceToken;
- (NSData *)deviceTokenForTokenURI:(NSString *)arg1;
- (SKHandle *)handleForTokenURI:(NSString *)arg1;
- (bool)isFromIDFromSelfAccount:(NSString *)arg1;
- (bool)isHandleAvailableToMessageFrom:(SKHandle *)arg1;
- (void)isHandleMessageable:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SKHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isHandleMessageableForPresence:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SKHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isValidURI:(IDSURI *)arg1;
- (SKHandle *)resolveSenderHandleWithPreferredSenderHandle:(SKHandle *)arg1;
- (NSString *)selfAddressedURIForURI:(IDSURI *)arg1;
- (bool)sendMessage:(NSDictionary *)arg1 toHandle:(SKHandle *)arg2 fromHandle:(SKHandle *)arg3 limitToPresenceCapable:(bool)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(NSDictionary *)arg1 toHandles:(NSArray *)arg2 fromHandle:(SKHandle *)arg3 limitToPresenceCapable:(bool)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessageToSelfDevices:(NSDictionary *)arg1 limitToPresenceCapable:(bool)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (void)setDelegate:(id <SKAMessagingProvidingDelegate>)arg1;
- (void)signPayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (NSString *)tokenURI;
- (void)verifySignedPayload:(void *)arg1 matchesPayload:(void *)arg2 fromTokenURI:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, void*

@end
