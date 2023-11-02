
@interface RPClient : NSObject {
    NSMutableSet * _assertions;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _targetUserSession;
    unsigned int  _type;
    <RPSignedInUserProvider> * _userProvider;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool targetUserSession;
@property (nonatomic) unsigned int type;

+ (void)primaryAccountSignedIn;
+ (void)primaryAccountSignedOut;

- (void).cxx_destruct;
- (id)_XPCConnectionWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)addOrUpdateIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)clientCreateDeviceMappingInternal:(int)arg1 applicationService:(id)arg2 deviceID:(id)arg3 endpointID:(id)arg4 completion:(id /* block */)arg5;
- (void)createDeviceToListenerMapping:(id)arg1 deviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)createEndpointToDeviceMapping:(id)arg1 deviceID:(id)arg2 endpointID:(id)arg3 completion:(id /* block */)arg4;
- (void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)diagnosticLogControl:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(id /* block */)arg3;
- (id)dispatchQueue;
- (void)getIdentitiesWithCompletion:(id /* block */)arg1;
- (void)getIdentitiesWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithUserProvider:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)primaryAccountSignedInWithCompletion:(id /* block */)arg1;
- (void)primaryAccountSignedOutWithCompletion:(id /* block */)arg1;
- (void)queryDeviceToListenerMapping:(id)arg1 deviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)regenerateTemporarySelfIdentityWithCompletion:(id /* block */)arg1;
- (void)setAutoMapping:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (void)setType:(unsigned int)arg1;
- (bool)targetUserSession;
- (unsigned int)type;

@end
