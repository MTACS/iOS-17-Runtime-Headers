
@interface CAReportingClient : NSObject {
    NSMutableDictionary * _clientReporters;
    NSXPCConnection * _connection;
}

@property (retain) NSMutableDictionary *clientReporters;
@property (retain) NSXPCConnection *connection;

+ (void)destroyClient;
+ (id)getClient;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addReporter:(id)arg1;
- (id)clientReporters;
- (id)connection;
- (long long)createReporterID:(unsigned int)arg1;
- (void)dealloc;
- (void)destroyReporterWithID:(long long)arg1;
- (void)destroyService;
- (void)disconnectReporters;
- (id)getConfigurationForReporterID:(long long)arg1;
- (unsigned short)getServiceTypeForReporterID:(long long)arg1;
- (id)initWithXPC:(bool)arg1 endpoint:(id)arg2;
- (id)listClientReporterIDs;
- (id)listServerReporterIDs;
- (void)reconnectReporter:(id)arg1;
- (void)reconnectStartedReporters;
- (id)reporterWithID:(long long)arg1;
- (void)requestMessageWithID:(long long)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 callback:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 reporters:(id)arg4;
- (void)setClientReporters:(id)arg1;
- (void)setConfiguration:(id)arg1 reporterID:(long long)arg2;
- (void)setConnection:(id)arg1;
- (void)setServiceType:(unsigned short)arg1 reporterID:(long long)arg2;
- (void)startReporters:(id)arg1;
- (void)stopReporters:(id)arg1;

@end
