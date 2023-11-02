
@interface SiriAnalyticsXPCConnectionHandler : NSObject <SiriAnalyticsXPCService> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSXPCConnection * _connection;
    NSString * _connectionApplicationIdentifier;
    <SiriAnalyticsXPCConnectionHandlerDelegate> * _delegate;
    SiriAnalyticsXPCConnectionEntitlements * _entitlements;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SiriAnalyticsXPCConnectionEntitlements *entitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)connection;
- (oneway void)createTag:(id)arg1 completion:(id /* block */)arg2;
- (id)entitlements;
- (oneway void)fetchKillSwitchEnabledWithCompletion:(id /* block */)arg1;
- (oneway void)fetchLogicalClocksWithCompletion:(id /* block */)arg1;
- (oneway void)fetchSensitiveConditionSpansWithCompletion:(id /* block */)arg1;
- (oneway void)fetchStateForPluginWithCompletion:(id /* block */)arg1;
- (oneway void)fetchTags:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 entitlementsKey:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)mapToAnnotatedMessage:(id)arg1;
- (oneway void)publishLargeMessage:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)publishMessages:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)publishUnorderedMessages:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)resetLogicalClockWithCompletion:(id /* block */)arg1;
- (oneway void)resolveMessages:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)saveState:(id)arg1 forPluginWithCompletion:(id /* block */)arg2;
- (oneway void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (oneway void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (oneway void)setKillSwitchEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (oneway void)vendSandboxExtensionWithResource:(long long)arg1 readonly:(bool)arg2 completion:(id /* block */)arg3;

@end
