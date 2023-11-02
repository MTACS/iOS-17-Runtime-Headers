
@interface MTRDeviceControllerOverXPC : MTRDeviceController {
    <NSCopying> * _controllerID;
    NSObject<OS_dispatch_queue> * _workQueue;
    MTRDeviceControllerXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) <NSCopying> *controllerID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) MTRDeviceControllerXPCConnection *xpcConnection;

+ (id)sharedControllerWithID:(id)arg1 xpcConnectBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)baseDeviceForNodeID:(id)arg1;
- (bool)cancelCommissioningForNodeID:(id)arg1 error:(id*)arg2;
- (bool)commissionDevice:(unsigned long long)arg1 commissioningParams:(id)arg2 error:(id*)arg3;
- (bool)commissionNodeWithID:(id)arg1 commissioningParams:(id)arg2 error:(id*)arg3;
- (id)controllerID;
- (id)deviceBeingCommissionedWithNodeID:(id)arg1 error:(id*)arg2;
- (void)fetchControllerIdWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)getBaseDevice:(unsigned long long)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getDeviceBeingCommissioned:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithControllerID:(id)arg1 workQueue:(id)arg2 connectBlock:(id /* block */)arg3;
- (id)initWithControllerID:(id)arg1 workQueue:(id)arg2 xpcConnection:(id)arg3;
- (bool)openPairingWindow:(unsigned long long)arg1 duration:(unsigned long long)arg2 error:(id*)arg3;
- (id)openPairingWindowWithPIN:(unsigned long long)arg1 duration:(unsigned long long)arg2 discriminator:(unsigned long long)arg3 setupPIN:(unsigned long long)arg4 error:(id*)arg5;
- (bool)pairDevice:(unsigned long long)arg1 address:(id)arg2 port:(unsigned short)arg3 discriminator:(unsigned short)arg4 setupPINCode:(unsigned int)arg5 error:(id*)arg6;
- (bool)pairDevice:(unsigned long long)arg1 discriminator:(unsigned short)arg2 setupPINCode:(unsigned int)arg3 error:(id*)arg4;
- (bool)pairDevice:(unsigned long long)arg1 onboardingPayload:(id)arg2 error:(id*)arg3;
- (void)setControllerID:(id)arg1;
- (bool)setupCommissioningSessionWithPayload:(id)arg1 newNodeID:(id)arg2 error:(id*)arg3;
- (bool)stopDevicePairing:(unsigned long long)arg1 error:(id*)arg2;
- (id)workQueue;
- (id)xpcConnection;

@end
