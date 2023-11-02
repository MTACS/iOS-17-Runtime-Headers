
@interface MTSessionServer : NSObject <MTAgentDiagnosticDelegate, MTSessionServer> {
    MTXPCConnectionListenerProvider * _connectionListenerProvider;
    MTSessionsCoordinator * _coordinator;
    <NAScheduler> * _serializer;
    bool  _systemReady;
}

@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (nonatomic, readonly) MTSessionsCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;
@property (getter=isSystemReady, nonatomic, readonly) bool systemReady;

- (void).cxx_destruct;
- (bool)_isSystemReady;
- (id)_systemNotReadyError;
- (void)checkIn;
- (id)connectionListenerProvider;
- (id)coordinator;
- (void)endAlertingSession;
- (id)gatherDiagnostics;
- (void)handleSystemReady;
- (id)initWithCoordinator:(id)arg1;
- (bool)isSystemReady;
- (void)printDiagnostics;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
