
@interface WAXPCConnection : NSObject {
    NSXPCConnection * _connection;
    <WAXPCConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _token;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <WAXPCConnectionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (void)clearMessageStoreAndReply:(id /* block */)arg1;
- (id)connection;
- (void)convertWiFiStatsIntoPercentile:(id)arg1 analysisGroup:(long long)arg2 groupTarget:(id)arg3 andReply:(id /* block */)arg4;
- (id)delegate;
- (void)establishConnectionWithToken:(id)arg1 andReply:(id /* block */)arg2;
- (void)getDeviceAnalyticsConfigurationAndReply:(id /* block */)arg1;
- (void)getDpsStatsandReply:(id /* block */)arg1;
- (void)getMessagesModelForGroupType:(long long)arg1 andReply:(id /* block */)arg2;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 withCopy:(id)arg3 andReply:(id /* block */)arg4;
- (void)getUsageStatsandReply:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)issueIOReportManagementCommand:(unsigned long long)arg1 andReply:(id /* block */)arg2;
- (void)killDaemonAndReply:(id /* block */)arg1;
- (void)lqmCrashTracerNotifyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2;
- (void)lqmCrashTracerReceiveBlock:(id)arg1 forInterfaceWithName:(id)arg2 andReply:(id /* block */)arg3;
- (id)queue;
- (void)registerMessageGroup:(long long)arg1 andReply:(id /* block */)arg2;
- (void)sendMemoryPressureRequestAndReply:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAnalyticsConfiguration:(id)arg1 andReply:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)setToken:(id)arg1;
- (void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (void)submitWiFiAnalyticsMessage:(id)arg1 andReply:(id /* block */)arg2;
- (void)submitWiFiAnalyticsMessageAdvanced:(id)arg1 andReply:(id /* block */)arg2;
- (void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(id /* block */)arg3;
- (id)token;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2;
- (void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(id /* block */)arg3;
- (void)triggerDeviceAnalyticsStoreMigrationAndReply:(id /* block */)arg1;
- (void)triggerQueryForNWActivity:(long long)arg1 andReply:(id /* block */)arg2;

@end
