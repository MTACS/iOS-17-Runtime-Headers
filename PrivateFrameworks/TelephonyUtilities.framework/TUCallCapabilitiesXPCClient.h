
@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _queue;
    TUCallCapabilitiesState * _state;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) TUCallCapabilitiesState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)callCapabilitiesClientXPCInterface;
+ (id)callCapabilitiesServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_retrieveState;
- (void)_updateState:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)asynchronousServer;
- (id)asynchronousServerWithErrorHandler:(id /* block */)arg1;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (void)dealloc;
- (id)delegateToQueue;
- (oneway void)endEmergencyCallbackMode;
- (void)handleServerDisconnect;
- (id)init;
- (void)invalidate;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (void)performDelegateCallbackBlock:(id /* block */)arg1;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)setRelayCallingEnabled:(bool)arg1;
- (oneway void)setRelayCallingEnabled:(bool)arg1 forDeviceWithID:(id)arg2;
- (void)setState:(id)arg1;
- (oneway void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setThumperCallingEnabled:(bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setVoLTECallingEnabled:(bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingEnabled:(bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)state;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (id)xpcConnection;

@end
