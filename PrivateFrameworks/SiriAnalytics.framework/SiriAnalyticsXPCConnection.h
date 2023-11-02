
@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _xpcPublishingGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupConnection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_createTag:(id)arg1 completion:(id /* block */)arg2;
- (id)_currentConnection;
- (oneway void)_fetchKillSwitchEnabledWithCompletion:(id /* block */)arg1;
- (void)_fetchLogicalClocksWithCompletion:(id /* block */)arg1;
- (void)_fetchSensitiveConditionSpansWithCompletion:(id /* block */)arg1;
- (void)_fetchStateForPluginWithCompletion:(id /* block */)arg1;
- (void)_fetchTags:(id /* block */)arg1;
- (void)_idleTimerFired;
- (oneway void)_publishLargeMessage:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)_publishLargeMessageToRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_publishMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)_publishMessagesToRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_publishUnorderedMessages:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_resetLogicalClockWithCompletion:(id /* block */)arg1;
- (void)_resolveMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)_resolveMessagesAtRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_saveState:(id)arg1 forPluginWithCompletion:(id /* block */)arg2;
- (void)_sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (oneway void)_setKillSwitchEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (void)_vendSandboxExtensionWithResource:(long long)arg1 readonly:(bool)arg2 completion:(id /* block */)arg3;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (oneway void)createTag:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (oneway void)fetchKillSwitchEnabledWithCompletion:(id /* block */)arg1;
- (oneway void)fetchLogicalClocksWithCompletion:(id /* block */)arg1;
- (oneway void)fetchSensitiveConditionSpansWithCompletion:(id /* block */)arg1;
- (oneway void)fetchStateForPluginWithCompletion:(id /* block */)arg1;
- (oneway void)fetchTags:(id /* block */)arg1;
- (id)initWithMachServiceName:(id)arg1;
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
