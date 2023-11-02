
@interface ActivityKit.AlertClient : NSObject <ACAlertXPCClient> {
    void connection;
    void delegate;
    void queue;
    void serverStartupToken;
}

- (void).cxx_destruct;
- (void)dismissAlertWithActivityIdentifier:(id)arg1;
- (id)init;
- (void)presentAlertWithActivityIdentifier:(id)arg1 payload:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;

@end
