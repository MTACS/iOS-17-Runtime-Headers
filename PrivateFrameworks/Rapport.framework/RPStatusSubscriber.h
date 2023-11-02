
@interface RPStatusSubscriber : NSObject <NSSecureCoding, RPStatusUpdatableSubscriber, RPStatusUpdatableXPCClientInterface> {
    bool  _activateCalled;
    NSMutableDictionary * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSMutableDictionary * _statusConfigurations;
    bool  _targetUserSession;
    <RPSignedInUserProvider> * _userProvider;
    NSXPCConnection * _xpcCnx;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *devices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSMutableDictionary *statusConfigurations;
@property (readonly) Class superclass;
@property (nonatomic) bool targetUserSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (id)_connectionWithClient:(id)arg1 queue:(id)arg2 userProvider:(id)arg3 interruptionHandler:(id /* block */)arg4 invalidationHandler:(id /* block */)arg5;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)devices;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierFromDevice:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDevices:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setStatusConfigurations:(id)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (id)statusConfigurations;
- (void)subscribeToStatusUpdate:(id)arg1 leeway:(double)arg2 configurationFlags:(unsigned long long)arg3 statusUpdateHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (bool)targetUserSession;
- (void)unsubscribeToStatusUpdate:(id)arg1 completion:(id /* block */)arg2;
- (bool)wantStatus:(id)arg1 FromDevice:(id)arg2;
- (void)xpcStatusUpdatableGiveStatusUpdate:(id)arg1 peerDevice:(id)arg2 currentState:(int)arg3 statusInfo:(id)arg4;

@end
