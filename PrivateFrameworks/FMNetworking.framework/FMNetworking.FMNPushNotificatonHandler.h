
@interface FMNetworking.FMNPushNotificatonHandler : NSObject <APSConnectionDelegate> {
    void $__lazy_storage_$_apsConnection;
    void _apsConnection;
    void apsQueue;
    void namedDelegatePort;
    void pendingTopicTokenFutures;
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
