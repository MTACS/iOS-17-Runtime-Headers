
@interface SFRemoteAutoFillSessionHelper : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    SDAutoFillAgent * _agent;
    id /* block */  _dismissUserNotificationHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    id /* block */  _pairingResponseHandler;
    id /* block */  _promptForPINHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) SDAutoFillAgent *agent;
@property (nonatomic, copy) id /* block */ dismissUserNotificationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ pairingResponseHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)agent;
- (void)autoFillDismissUserNotification;
- (void)autoFillPairingSucceeded:(bool)arg1 completion:(id /* block */)arg2;
- (void)autoFillPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)clientDismissUserNotification;
- (void)clientPairingSucceeded:(bool)arg1 completion:(id /* block */)arg2;
- (void)clientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (id /* block */)dismissUserNotificationHandler;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)pairingResponseHandler;
- (id /* block */)promptForPINHandler;
- (void)serverDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)serverTryPIN:(id)arg1;
- (void)serverUserNotificationDidActivate:(id)arg1;
- (void)serverUserNotificationDidDismiss:(id)arg1;
- (void)setAgent:(id)arg1;
- (void)setDismissUserNotificationHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPairingResponseHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;

@end
