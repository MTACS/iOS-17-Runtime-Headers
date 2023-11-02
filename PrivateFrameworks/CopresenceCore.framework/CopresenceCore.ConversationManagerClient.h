
@interface CopresenceCore.ConversationManagerClient : _TtGC14CopresenceCore9XPCClientOS_28ConversationManagerInterface_ <CPConversationManagerXPCClient> {
    void $__lazy_storage_$_notification;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _activeSessionContainer;
    void customEndpointProviders;
    void hasInitialState;
    void pluginClientReporter;
    void pubSubTopicReporter;
    void publishers;
    void subscriptions;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestEndpointWith:(id)arg1 activitySessionUUID:(id)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)updateConversationContainersWithConversationContainersByGroupUUID:(id)arg1;

@end
