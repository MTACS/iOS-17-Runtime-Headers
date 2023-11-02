
@interface ActivityKit.ActivityAuthorizationClient : NSObject <ACActivityAuthorizationXPCClient> {
    void _activityAuthorizationPublisher;
    void _frequentUpdatesPublisher;
    void connection;
    void queue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (void)activityAuthorizationDidChangeWithOptions:(id)arg1;
- (void)frequentUpdatesAuthorizationDidChangeWithOptions:(id)arg1;
- (id)init;

@end
