
@protocol nw_listener_inbox_delegate

@required

- (bool)canHandleNewConnection:(nw_listener_inbox *)arg1;
- (NSObject<OS_nw_array> *)getIDSInformation;
- (char *)getPeerDeviceID;
- (void)handleInbound:(NWConcrete_nw_connection *)arg1 addProtocolInbox:(bool)arg2;
- (void)handleInboundPacket:(const char *)arg1 length:(unsigned short)arg2 from:(NSObject<OS_nw_endpoint> *)arg3 to:(NSObject<OS_nw_endpoint> *)arg4 interface:(NSObject<OS_nw_interface> *)arg5 socket:(NSObject<OS_nw_fd_wrapper> *)arg6;
- (void)handleInboxCancelComplete:(nw_listener_inbox *)arg1;
- (void)handleInboxFailed:(nw_listener_inbox *)arg1 error:(NSObject<OS_nw_error> *)arg2;
- (void)updateParametersForNewConnection:(NSObject<OS_nw_parameters> *)arg1;

@end
