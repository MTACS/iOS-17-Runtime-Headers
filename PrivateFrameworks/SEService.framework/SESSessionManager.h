
@interface SESSessionManager : NSObject <SESSessionManagerCallbackInterface> {
    NSXPCConnection * _connection;
    NSString * _serviceName;
    NSMutableSet * _sessions;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *serviceName;
@property (retain) NSMutableSet *sessions;
@property (readonly) Class superclass;

+ (id)getVehicleReports:(id*)arg1;
+ (id)pauseRangingForReaderIdentifier:(id)arg1 durationInSec:(id)arg2;
+ (id)resumeRangingForReaderIdentifier:(id)arg1;
+ (void)setMachServiceName:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)connect;
- (id)connection;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)serviceName;
- (void)sessionEnded:(id)arg1;
- (id)sessions;
- (void)setConnection:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSessions:(id)arg1;
- (id)startDCKAssertionForKeyIdentifier:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (id)startDigitalCarKeySessionWithOptions:(id)arg1 startCallback:(id /* block */)arg2;
- (id)startRKESessionWithOptions:(id)arg1 startCallback:(id /* block */)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
