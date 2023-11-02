
@interface BCSNotificationServiceConnection : NSObject {
    id /* block */  _interruptionHandler;
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)dealloc;
- (void)didReceiveNotificationResponse:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(bool)arg3 withReply:(id /* block */)arg4;
- (id)serviceConnection;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setServiceConnection:(id)arg1;
- (void)startNFCReaderWithDelegate:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)stopNFCReaderWithErrorHandler:(id /* block */)arg1;

@end
