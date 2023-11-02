
@protocol IDSServiceDelegate <NSObject>

@optional

- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(bool)arg4 error:(NSError *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(bool)arg4 error:(NSError *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 fromID:(NSString *)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 sentBytes:(long long)arg4 totalBytes:(long long)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingData:(NSData *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingOpportunisticData:(NSData *)arg3 withIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingPendingMessageOfType:(long long)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 metadata:(NSDictionary *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingUnhandledProtobuf:(IDSProtobuf *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withContext:(NSData *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withOptions:(NSDictionary *)arg5;
- (void)service:(void *)arg1 account:(void *)arg2 pendingResourceWithMetadata:(void *)arg3 fromID:(void *)arg4 acknowledgementBlock:(void *)arg5 context:(void *)arg6; // needs 6 arg types, found 11: IDSService *, IDSAccount *, NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, IDSMessageContext *
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantDataUpdate:(IDSGroupSessionParticipantUpdate *)arg3;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantUpdate:(IDSGroupSessionParticipantUpdate *)arg3;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantUpdate:(IDSGroupSessionParticipantUpdate *)arg3 context:(IDSMessageContext *)arg4;
- (void)service:(IDSService *)arg1 activeAccountsChanged:(NSSet *)arg2;
- (void)service:(IDSService *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 devicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 didCancelMessageWithSuccess:(bool)arg2 error:(NSError *)arg3 identifier:(NSString *)arg4;
- (void)service:(IDSService *)arg1 didSendOpportunisticDataWithIdentifier:(NSString *)arg2 toIDs:(NSArray *)arg3;
- (void)service:(void *)arg1 didSwitchActivePairedDevice:(void *)arg2 acknowledgementBlock:(void *)arg3; // needs 3 arg types, found 7: IDSService *, IDSDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)service:(IDSService *)arg1 linkedDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)serviceAllowedTrafficClassifiersDidReset:(IDSService *)arg1;
- (void)serviceSpaceDidBecomeAvailable:(IDSService *)arg1;

@end
