
@interface CBUserController : NSObject <CBActivatable, CBErrorReporting, CBInterruptable, CBStackUserController, CBUserControllerInterface> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    unsigned int  _clientID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

+ (id)readPrefKeys:(id)arg1 source:(unsigned int)arg2 error:(id*)arg3;
+ (bool)writePrefKey:(id)arg1 value:(id)arg2 source:(unsigned int)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activateXPCStart:(bool)arg1;
- (bool)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)appleAudioAccessoryLimitedLoggingWithCompletion:(id /* block */)arg1;
- (unsigned int)clientID;
- (void)dealloc;
- (void)deleteControllerInfoForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticShow:(id)arg1 completion:(id /* block */)arg2;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (void)getCloudPairedDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)getControllerInfoForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentUserGivenNameWithCompletion:(id /* block */)arg1;
- (void)getDistributedLoggingStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)readPrefKeys:(id)arg1 source:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)recordEventWithDeviceIdentifier:(id)arg1 initiator:(bool)arg2 starting:(bool)arg3 useCase:(unsigned int)arg4;
- (void)recordEventWithStarting:(bool)arg1 useCase:(unsigned int)arg2;
- (void)setAppleAudioAccessoryLimitedLogging:(bool)arg1 completion:(id /* block */)arg2;
- (void)setClientID:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDistributedLoggingStatus:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)storeControllerInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)testListenerEndpoint;
- (void)writePrefKey:(id)arg1 value:(id)arg2 source:(unsigned int)arg3 completion:(id /* block */)arg4;

@end
