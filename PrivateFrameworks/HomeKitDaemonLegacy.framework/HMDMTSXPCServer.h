
@interface HMDMTSXPCServer : HMFObject {
    HMDMTSAuthorizationServer * _authorizationServer;
    HMDMTSDeviceSetupServer * _deviceSetupServer;
    HMDMTSPairingServer * _pairingServer;
    MTSXPCServer * _xpcServer;
}

@property (readonly) HMDMTSAuthorizationServer *authorizationServer;
@property (readonly) HMDMTSDeviceSetupServer *deviceSetupServer;
@property (readonly) HMDMTSPairingServer *pairingServer;
@property (readonly) MTSXPCServer *xpcServer;

- (void).cxx_destruct;
- (id)authorizationServer;
- (id)deviceSetupServer;
- (id)initWithPairingServer:(id)arg1 deviceSetupServer:(id)arg2 authorizationServer:(id)arg3;
- (id)initWithPairingServer:(id)arg1 deviceSetupServer:(id)arg2 authorizationServer:(id)arg3 xpcServer:(id)arg4;
- (id)pairingServer;
- (void)start;
- (id)xpcServer;

@end
