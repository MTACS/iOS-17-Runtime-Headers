
@interface LNRelevantIntentProvider : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)relevantIntentsForBundleIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)relevantIntentsWithReply:(id /* block */)arg1;

@end
