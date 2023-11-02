
@interface MadGate : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (id)copyActivationRecord:(id*)arg1;
- (id)copyDCRT:(id)arg1 withError:(id*)arg2;
- (struct __SecIdentity { }*)copyLegacyDeviceIdentity:(id*)arg1;
- (id)copyPCRTToken:(id*)arg1;
- (id)copyUCRTVersionInfo:(id*)arg1;
- (id)createActivationInfo:(id*)arg1;
- (id)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)createTunnel1SessionInfo:(id*)arg1;
- (bool)deactivateDevice:(id*)arg1;
- (void)dealloc;
- (bool)deleteLegacyDeviceIdentity:(id*)arg1;
- (id)getActivationBuild:(id*)arg1;
- (id)getActivationState:(id*)arg1;
- (id)getDCRTState:(id)arg1 withError:(id*)arg2;
- (id)getUCRTActivationLockState:(id*)arg1;
- (bool)handleActivationInfo:(id)arg1 withError:(id*)arg2;
- (bool)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)isDeviceABrick:(id*)arg1;
- (bool)isInFieldCollected:(id*)arg1;
- (bool)isUCRTAvailable:(id*)arg1;
- (id)issueClientCertificateLegacy:(id)arg1 error:(id*)arg2;
- (void)issueDCRT:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)issueUCRT:(id)arg1 withError:(id*)arg2;
- (bool)reactivateDevice:(id*)arg1;
- (bool)recertifyDeviceWithError:(id*)arg1;
- (bool)ucrtUpgradeRequired:(id*)arg1;
- (bool)unbrickDevice:(id*)arg1;
- (void)updateBasebandTicket:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 baaCert:(struct __SecCertificate { }*)arg2 baaIntermediateCert:(struct __SecCertificate { }*)arg3 options:(id)arg4 withCompletion:(id /* block */)arg5;

@end
