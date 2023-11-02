
@interface RPStatusProvider : NSObject <NSSecureCoding, RPStatusUpdatableProvider, RPStatusUpdatableXPCClientInterface> {
    bool  _activateCalled;
    NSMutableDictionary * _currentlyProviding;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _targetUserSession;
    <RPSignedInUserProvider> * _userProvider;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSMutableDictionary *currentlyProviding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
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
- (void)cancelStatusUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)currentlyProviding;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)provideStatusUpdate:(id)arg1 statusInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentlyProviding:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (bool)targetUserSession;

@end
