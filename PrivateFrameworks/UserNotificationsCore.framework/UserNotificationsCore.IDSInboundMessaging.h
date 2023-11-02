
@interface UserNotificationsCore.IDSInboundMessaging : NSObject <IDSServiceDelegate> {
    void payloadConsumer;
    void queue;
    void service;
}

- (void).cxx_destruct;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;

@end
