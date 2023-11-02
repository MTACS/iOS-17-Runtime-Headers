
@interface SessionPushNotifications.APSPushConnection : NSObject <APSConnectionDelegate> {
    void connection;
    void delegate;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forInfo:(id)arg3;
- (id)init;

@end
