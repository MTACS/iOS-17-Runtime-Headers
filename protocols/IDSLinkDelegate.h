
@protocol IDSLinkDelegate <NSObject>

@required

- (void)link:(id)arg1 didConnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (bool)link:(id)arg1 didReceivePacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned int x17; struct sockaddr_storage { unsigned char x_18_1_1; unsigned char x_18_1_2; BOOL x_18_1_3[6]; long long x_18_1_4; BOOL x_18_1_5[112]; } x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; unsigned short x21; unsigned char x22; int x23; struct { char *x_24_1_1; unsigned short x_24_1_2; int x_24_1_3; unsigned short x_24_1_4[12]; unsigned long long x_24_1_5; unsigned char x_24_1_6; unsigned short x_24_1_7; unsigned char x_24_1_8; bool x_24_1_9; bool x_24_1_10; unsigned short x_24_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_24_1_12; bool x_24_1_13; bool x_24_1_14; int x_24_1_15; unsigned short x_24_1_16[4]; unsigned char x_24_1_17; bool x_24_1_18; bool x_24_1_19; bool x_24_1_20; unsigned int x_24_1_21; } x24[8]; }*)arg2 fromDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;

@optional

- (void)didReceiveBlockedIndicationForLink:(id)arg1 reason:(unsigned int)arg2;
- (void)link:(id)arg1 didAddQREvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;
- (void)link:(id)arg1 didConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(NSUUID *)arg3 localAttributes:(NSDictionary *)arg4 remoteAttributes:(NSDictionary *)arg5;
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(bool)arg2 currentDefaultLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didDisconnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(NSUUID *)arg3 reason:(unsigned char)arg4;
- (void)link:(id)arg1 didFailConnectionOfType:(NSString *)arg2;
- (void)link:(id)arg1 didFailToConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didGetLinkProbingStatus:(NSDictionary *)arg2;
- (void)link:(id)arg1 didMitigateCollision:(bool)arg2;
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;
- (void)link:(id)arg1 didReceiveChildConnections:(NSDictionary *)arg2 forLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didReceiveEncryptedDataBlobs:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveErrorIndicationWithCode:(unsigned int)arg2;
- (void)link:(id)arg1 didReceiveKeyMaterialMessageData:(NSData *)arg2 fromParticipantIDs:(NSArray *)arg3 toParticipantID:(NSNumber *)arg4;
- (void)link:(id)arg1 didReceiveMappedParticipantsDict:(NSDictionary *)arg2 forLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didReceiveMaterialInfo:(IDSQRProtoMaterialInfo *)arg2 material:(IDSQRProtoMaterial *)arg3;
- (void)link:(id)arg1 didReceiveParticipantUpdate:(NSDictionary *)arg2 status:(unsigned short)arg3;
- (void)link:(id)arg1 didReceivePluginDisconnect:(NSArray *)arg2;
- (void)link:(id)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(NSString *)arg3;
- (void)link:(id)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(NSString *)arg3;
- (void)link:(id)arg1 didReceiveReliableUnicastServerMaterial:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveReportEvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveRequestToPurgeRegistration:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveSKEData:(NSData *)arg2;
- (void)link:(id)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 relayGroupID:(NSString *)arg3 relaySessionID:(NSString *)arg4 status:(unsigned int)arg5;
- (void)link:(id)arg1 didReceiveSessionStateCounter:(unsigned int)arg2;
- (void)link:(id)arg1 didReceiveSessionStats:(NSDictionary *)arg2 relayGroupID:(NSString *)arg3 relaySessionID:(NSString *)arg4 success:(bool)arg5;
- (void)link:(id)arg1 didSoMaskChange:(unsigned int)arg2;
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;
- (void)link:(id)arg1 hasSpaceAvailable:(bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 hostAwakeDidChange:(bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)linkTransactionIDMismatchDetected:(id)arg1;
- (void)terminateCallDueToIdleClientForLink:(id)arg1;

@end
