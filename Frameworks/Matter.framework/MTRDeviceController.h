
@interface MTRDeviceController : NSObject {
    NSObject<OS_dispatch_queue> * _chipWorkQueue;
    MTRCommissionableBrowser * _commissionableBrowser;
    void * _cppCommissioner;
    void * _deviceAttestationDelegateBridge;
    struct MTRDeviceControllerDelegateBridge { int (**x1)(); id x2; id x3; id x4; } * _deviceControllerDelegateBridge;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceMapLock;
    MTRDeviceControllerFactory * _factory;
    NSMutableDictionary * _nodeIDToDeviceMap;
    void * _operationalCredentialsDelegate;
    struct MTRP256KeypairBridge { 
        int (**_vptr$ECPKeypair)(); 
        struct P256PublicKey { 
            int (**_vptr$ECPKey)(); 
            unsigned char bytes[65]; 
        } mPublicKey; 
        struct P256KeypairContext { 
            unsigned char mBytes[512]; 
        } mKeypair; 
        bool mInitialized; 
        <MTRKeypair> *mKeypair; 
        struct P256PublicKey { 
            int (**_vptr$ECPKey)(); 
            unsigned char bytes[65]; 
        } mPubkey; 
    }  _operationalKeypairBridge;
    void * _partialDACVerifier;
    struct MTRP256KeypairBridge { 
        int (**_vptr$ECPKeypair)(); 
        struct P256PublicKey { 
            int (**_vptr$ECPKey)(); 
            unsigned char bytes[65]; 
        } mPublicKey; 
        struct P256KeypairContext { 
            unsigned char mBytes[512]; 
        } mKeypair; 
        bool mInitialized; 
        <MTRKeypair> *mKeypair; 
        struct P256PublicKey { 
            int (**_vptr$ECPKey)(); 
            unsigned char bytes[65]; 
        } mPubkey; 
    }  _signingKeypairBridge;
    struct atomic<unsigned char> { 
        struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
            _Atomic unsigned char __a_value; 
        } __a_; 
    }  _storedFabricIndex;
}

@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) MTRCommissionableBrowser *commissionableBrowser;
@property (readonly) NSNumber *compressedFabricID;
@property (nonatomic, readonly) NSNumber *controllerNodeID;
@property (nonatomic, readonly) NSNumber *controllerNodeId;
@property (readonly) void*cppCommissioner;
@property (readonly) void*deviceAttestationDelegateBridge;
@property (readonly) struct MTRDeviceControllerDelegateBridge { int (**x1)(); id x2; id x3; id x4; }*deviceControllerDelegateBridge;
@property (readonly) struct os_unfair_lock_s { unsigned int x1; } deviceMapLock;
@property (readonly) unsigned char fabricIndex;
@property (readonly) MTRDeviceControllerFactory *factory;
@property (readonly) NSMutableDictionary *nodeIDToDeviceMap;
@property (readonly) void*operationalCredentialsDelegate;
@property (readonly) struct MTRP256KeypairBridge { int (**x1)(); struct P256PublicKey { int (**x_2_1_1)(); unsigned char x_2_1_2[65]; } x2; struct P256KeypairContext { unsigned char x_3_1_1[512]; } x3; bool x4; id x5; struct P256PublicKey { int (**x_6_1_1)(); unsigned char x_6_1_2[65]; } x6; } operationalKeypairBridge;
@property (readonly) void*partialDACVerifier;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) struct MTRP256KeypairBridge { int (**x1)(); struct P256PublicKey { int (**x_2_1_1)(); unsigned char x_2_1_2[65]; } x2; struct P256KeypairContext { unsigned char x_3_1_1[512]; } x3; bool x4; id x5; struct P256PublicKey { int (**x_6_1_1)(); unsigned char x_6_1_2[65]; } x6; } signingKeypairBridge;

+ (bool)checkForError:(struct ChipError { unsigned int x1; char *x2; unsigned int x3; })arg1 logMsg:(id)arg2 error:(id*)arg3;
+ (id)computePASEVerifierForSetupPasscode:(id)arg1 iterations:(id)arg2 salt:(id)arg3 error:(id*)arg4;
+ (id)decodeXPCReadParams:(id)arg1;
+ (id)decodeXPCResponseValues:(id)arg1;
+ (id)decodeXPCSubscribeParams:(id)arg1;
+ (id)encodeXPCReadParams:(id)arg1;
+ (id)encodeXPCResponseValues:(id)arg1;
+ (id)encodeXPCSubscribeParams:(id)arg1;
+ (id)sharedControllerWithID:(id)arg1 xpcConnectBlock:(id /* block */)arg2;
+ (id)sharedControllerWithId:(id)arg1 xpcConnectBlock:(id /* block */)arg2;
+ (id)xpcInterfaceForClientProtocol;
+ (id)xpcInterfaceForServerProtocol;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)asyncDispatchToMatterQueue:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)asyncGetCommissionerOnMatterQueue:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)attestationChallengeForDeviceID:(id)arg1;
- (id)baseDeviceForNodeID:(id)arg1;
- (bool)cancelCommissioningForNodeID:(id)arg1 error:(id*)arg2;
- (bool)checkForInitError:(bool)arg1 logMsg:(id)arg2;
- (bool)checkForStartError:(struct ChipError { unsigned int x1; char *x2; unsigned int x3; })arg1 logMsg:(id)arg2;
- (bool)checkIsRunning;
- (bool)checkIsRunning:(id*)arg1;
- (id)chipWorkQueue;
- (void)cleanup;
- (void)cleanupAfterStartup;
- (void)clearDeviceAttestationDelegateBridge;
- (bool)commissionDevice:(unsigned long long)arg1 commissioningParams:(id)arg2 error:(id*)arg3;
- (bool)commissionNodeWithID:(id)arg1 commissioningParams:(id)arg2 error:(id*)arg3;
- (id)commissionableBrowser;
- (id)compressedFabricID;
- (id)computePaseVerifier:(unsigned int)arg1 iterations:(unsigned int)arg2 salt:(id)arg3;
- (bool)continueCommissioningDevice:(void*)arg1 ignoreAttestationFailure:(bool)arg2 error:(id*)arg3;
- (id)controllerNodeID;
- (id)controllerNodeId;
- (void*)cppCommissioner;
- (void)deinitFromFactory;
- (void*)deviceAttestationDelegateBridge;
- (id)deviceBeingCommissionedWithNodeID:(id)arg1 error:(id*)arg2;
- (struct MTRDeviceControllerDelegateBridge { int (**x1)(); id x2; id x3; id x4; }*)deviceControllerDelegateBridge;
- (id)deviceForNodeID:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })deviceMapLock;
- (unsigned char)fabricIndex;
- (id)factory;
- (id)fetchAttestationChallengeForDeviceId:(unsigned long long)arg1;
- (bool)getBaseDevice:(unsigned long long)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getDeviceBeingCommissioned:(unsigned long long)arg1 error:(id*)arg2;
- (void)getSessionForCommissioneeDevice:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getSessionForNode:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithFactory:(id)arg1 queue:(id)arg2;
- (void)invalidateCASESessionForNode:(unsigned long long)arg1;
- (bool)isRunning;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })isRunningOnFabric:(void*)arg1 fabricIndex:(unsigned char)arg2 isRunning:(bool*)arg3;
- (id)nodeIDToDeviceMap;
- (bool)openPairingWindow:(unsigned long long)arg1 duration:(unsigned long long)arg2 error:(id*)arg3;
- (id)openPairingWindowWithPIN:(unsigned long long)arg1 duration:(unsigned long long)arg2 discriminator:(unsigned long long)arg3 setupPIN:(unsigned long long)arg4 error:(id*)arg5;
- (void*)operationalCredentialsDelegate;
- (void)operationalInstanceAdded:(unsigned long long)arg1;
- (struct MTRP256KeypairBridge { int (**x1)(); struct P256PublicKey { int (**x_2_1_1)(); unsigned char x_2_1_2[65]; } x2; struct P256KeypairContext { unsigned char x_3_1_1[512]; } x3; bool x4; id x5; struct P256PublicKey { int (**x_6_1_1)(); unsigned char x_6_1_2[65]; } x6; })operationalKeypairBridge;
- (bool)pairDevice:(unsigned long long)arg1 address:(id)arg2 port:(unsigned short)arg3 setupPINCode:(unsigned int)arg4 error:(id*)arg5;
- (bool)pairDevice:(unsigned long long)arg1 discriminator:(unsigned short)arg2 setupPINCode:(unsigned int)arg3 error:(id*)arg4;
- (bool)pairDevice:(unsigned long long)arg1 onboardingPayload:(id)arg2 error:(id*)arg3;
- (void*)partialDACVerifier;
- (void)preWarmCommissioningSession;
- (void)removeDevice:(id)arg1;
- (unsigned char)sessionTransportTypeForDevice:(id)arg1;
- (void)setDeviceControllerDelegate:(id)arg1 queue:(id)arg2;
- (void)setNocChainIssuer:(id)arg1 queue:(id)arg2;
- (bool)setOperationalCertificateIssuer:(id)arg1 queue:(id)arg2;
- (void)setPairingDelegate:(id)arg1 queue:(id)arg2;
- (bool)setupCommissioningSessionWithDiscoveredDevice:(id)arg1 payload:(id)arg2 newNodeID:(id)arg3 error:(id*)arg4;
- (bool)setupCommissioningSessionWithPayload:(id)arg1 newNodeID:(id)arg2 error:(id*)arg3;
- (void)shutDownCppController;
- (void)shutdown;
- (struct MTRP256KeypairBridge { int (**x1)(); struct P256PublicKey { int (**x_2_1_1)(); unsigned char x_2_1_2[65]; } x2; struct P256KeypairContext { unsigned char x_3_1_1[512]; } x3; bool x4; id x5; struct P256PublicKey { int (**x_6_1_1)(); unsigned char x_6_1_2[65]; } x6; })signingKeypairBridge;
- (bool)startBrowseForCommissionables:(id)arg1 queue:(id)arg2;
- (bool)startup:(id)arg1;
- (bool)stopBrowseForCommissionables;
- (bool)stopDevicePairing:(unsigned long long)arg1 error:(id*)arg2;
- (void)syncRunOnWorkQueue:(id /* block */)arg1 error:(id*)arg2;
- (bool)syncRunOnWorkQueueWithBoolReturnValue:(id /* block */)arg1 error:(id*)arg2;
- (id)syncRunOnWorkQueueWithReturnValue:(id /* block */)arg1 error:(id*)arg2;

@end
