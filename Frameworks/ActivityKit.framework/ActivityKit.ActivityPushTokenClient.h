
@interface ActivityKit.ActivityPushTokenClient : NSObject <ACActivityPushTokenXPCClient> {
    void _pushTokenPublisher;
    void _queue_pushTokens;
    void connection;
    void queue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)pushTokensChanged:(id)arg1;

@end
