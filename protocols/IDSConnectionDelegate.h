
@protocol IDSConnectionDelegate <NSObject>

@optional

- (void)connection:(IDSConnection *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 devicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 didCancelMessageWithSuccess:(bool)arg2 error:(NSError *)arg3 identifier:(NSString *)arg4;
- (void)connection:(IDSConnection *)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)connection:(IDSConnection *)arg1 didSendOpportunisticDataWithIdentifier:(NSString *)arg2 toIDs:(NSArray *)arg3;
- (void)connection:(IDSConnection *)arg1 didUpdateDeviceIdentity:(IDSDeviceIdentity *)arg2 error:(NSError *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(bool)arg3 error:(NSError *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 fromURI:(IDSURI *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryData:(NSData *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryReportMessage:(NSString *)arg2 accessoryID:(NSString *)arg3 controllerID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 incomingData:(NSData *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingEngramMessage:(NSDictionary *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingGroupData:(NSData *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingInvitation:(NSDictionary *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingInvitationUpdate:(NSDictionary *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromURI:(IDSURI *)arg3;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingOpportunisticData:(NSData *)arg2 withIdentifier:(NSString *)arg3 fromURI:(IDSURI *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 incomingPendingMessageFromURI:(IDSURI *)arg2 context:(IDSMessageContext *)arg3;
- (void)connection:(IDSConnection *)arg1 incomingPendingResourceWithMetadata:(NSDictionary *)arg2 guid:(NSString *)arg3 fromURI:(IDSURI *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 incomingProtobuf:(IDSProtobuf *)arg2 fromURI:(IDSURI *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 isActiveChanged:(bool)arg2;
- (void)connection:(IDSConnection *)arg1 nearbyDevicesChanged:(NSArray *)arg2;

@end
