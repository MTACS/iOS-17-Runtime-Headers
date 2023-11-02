
@protocol WCXPCManagerSharedProtocol <NSObject>

@required

- (void)handleActiveDeviceSwitchStarted;
- (void)handleApplicationContextWithPairingID:(NSString *)arg1;
- (void)handleFileResultWithPairingID:(NSString *)arg1;
- (void)handleIncomingFileWithPairingID:(NSString *)arg1;
- (void)handleIncomingUserInfoWithPairingID:(NSString *)arg1;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(WCMessageRequest *)arg1;
- (void)handleResponse:(WCMessageResponse *)arg1;
- (void)handleSentMessageWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)handleSessionStateChanged:(WCSessionState *)arg1;
- (void)handleUserInfoResultWithPairingID:(NSString *)arg1;

@end
