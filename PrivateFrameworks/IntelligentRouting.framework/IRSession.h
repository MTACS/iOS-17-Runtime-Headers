
@interface IRSession : NSObject <IRXPCSessionClient> {
    IRConfiguration * _configuration;
    IRServerConnection * _connection;
    <IRSessionDelegate> * _delegate;
    IRExportedObjectForwarder * _exportedObjectForwarder;
    NSUUID * _internalID;
    bool  _isSessionInvalidated;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) IRConfiguration *configuration;
@property (nonatomic, retain) IRServerConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IRSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IRExportedObjectForwarder *exportedObjectForwarder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *internalID;
@property (nonatomic) bool isSessionInvalidated;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)_createTemporaryServerConnection;
+ (void)createServiceWithParameters:(id)arg1 reply:(id /* block */)arg2;
+ (void)databaseExportwithReply:(id /* block */)arg1;
+ (void)deleteDatabaseWithReply:(id /* block */)arg1;
+ (void)deleteService:(id)arg1;
+ (void)getServiceTokensWithReply:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_didUpdateContext:(id)arg1;
- (bool)_isCandidateValid:(id)arg1;
- (void)_notifySessionHasFailed:(long long)arg1 desc:(id)arg2;
- (void)_serverConnectionInterrupted;
- (void)_serverConnectionInvalidated;
- (void)_sessionDidFailWithError:(id)arg1;
- (void)_sessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)_sessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
- (void)addEvent:(id)arg1 forCandidate:(id)arg2;
- (id)configuration;
- (id)connection;
- (id)delegate;
- (void)deleteCandidate:(id)arg1;
- (id)description;
- (id)exportedObjectForwarder;
- (unsigned long long)hash;
- (id)init;
- (id)internalID;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isSessionInvalidated;
- (id)queue;
- (void)requestCurrentContext;
- (void)runWithConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportedObjectForwarder:(id)arg1;
- (void)setInternalID:(id)arg1;
- (void)setIsSessionInvalidated:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)updateCandidate:(id)arg1;
- (void)updateCandidates:(id)arg1;

@end
