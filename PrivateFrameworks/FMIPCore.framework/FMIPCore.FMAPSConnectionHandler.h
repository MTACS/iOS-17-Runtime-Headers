
@interface FMIPCore.FMAPSConnectionHandler : NSObject <APSConnectionDelegate> {
    void connection;
    void connectionQueue;
    void delegate;
    void preferenceDomain;
    void publicAPSToken;
    void topic;
    void topicAPSToken;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)init;

@end
