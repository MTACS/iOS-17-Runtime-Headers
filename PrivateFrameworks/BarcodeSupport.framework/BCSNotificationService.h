
@interface BCSNotificationService : NSObject <BCSNotificationServiceProtocol> {
    NSXPCConnection * _connection;
    BCSNFCReader * _nfcReader;
}

- (void).cxx_destruct;
- (void)_cancelNotificationsForCodeType:(long long)arg1;
- (void)_didReceiveNotificationResponse:(id)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)didReceiveNotificationResponse:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(bool)arg3 reply:(id /* block */)arg4;
- (void)startNFCReaderWithDelegate:(id)arg1;
- (void)stopNFCReader;

@end
