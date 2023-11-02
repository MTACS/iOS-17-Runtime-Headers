
@interface MTRDeviceControllerFactory : NSObject {
    bool  _advertiseOperational;
    struct MTRAttestationTrustStoreBridge { int (**x1)(); id x2; } * _attestationTrustStoreBridge;
    struct IgnoreCertificateValidityPeriodPolicy { int (**x1)(); } * _certificateValidityPolicy;
    NSObject<OS_dispatch_queue> * _chipWorkQueue;
    struct DeviceControllerFactory { unsigned short x1; struct DeviceControllerSystemState {} *x2; struct PersistentStorageDelegate {} *x3; struct OperationalKeystore {} *x4; struct OperationalCertificateStore {} *x5; struct CertificateValidityPolicy {} *x6; bool x7; } * _controllerFactory;
    NSMutableArray * _controllers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _controllersLock;
    struct DeviceAttestationVerifier { int (**x1)(); bool x2; } * _deviceAttestationVerifier;
    void * _groupDataProvider;
    void * _groupStorageDelegate;
    struct PersistentStorageOperationalKeystore { int (**x1)(); struct PersistentStorageDelegate {} *x2; unsigned char x3; struct P256Keypair {} *x4; bool x5; bool x6; } * _keystore;
    void * _opCertStore;
    struct MTROperationalBrowser { id x1; id x2; struct _DNSServiceRef_t {} *x3; bool x4; bool x5; } * _operationalBrowser;
    struct MTROTAProviderDelegateBridge { int (**x1)(); id x2; id x3; } * _otaProviderDelegateBridge;
    struct MTRPersistentStorageDelegateBridge { int (**x1)(); id x2; id x3; } * _persistentStorageDelegateBridge;
    bool  _running;
    struct RawKeySessionKeystore { int (**x1)(); } * _sessionKeystore;
}

@property (readonly) bool advertiseOperational;
@property (readonly) struct MTRAttestationTrustStoreBridge { int (**x1)(); id x2; }*attestationTrustStoreBridge;
@property (nonatomic, readonly) struct IgnoreCertificateValidityPeriodPolicy { int (**x1)(); }*certificateValidityPolicy;
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) struct DeviceControllerFactory { unsigned short x1; struct DeviceControllerSystemState {} *x2; struct PersistentStorageDelegate {} *x3; struct OperationalKeystore {} *x4; struct OperationalCertificateStore {} *x5; struct CertificateValidityPolicy {} *x6; bool x7; }*controllerFactory;
@property (readonly) NSMutableArray *controllers;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } controllersLock;
@property (readonly) struct DeviceAttestationVerifier { int (**x1)(); bool x2; }*deviceAttestationVerifier;
@property struct DeviceAttestationVerifier { int (**x1)(); bool x2; }*deviceAttestationVerifier;
@property (readonly) struct GroupDataProvider { int (**x1)(); unsigned short x2; unsigned short x3; struct GroupListener {} *x4; }*groupData;
@property (readonly) void*groupDataProvider;
@property (readonly) void*groupStorageDelegate;
@property (readonly) struct PersistentStorageOperationalKeystore { int (**x1)(); struct PersistentStorageDelegate {} *x2; unsigned char x3; struct P256Keypair {} *x4; bool x5; bool x6; }*keystore;
@property (nonatomic, readonly) NSArray *knownFabrics;
@property (readonly) void*opCertStore;
@property (readonly) struct MTROperationalBrowser { id x1; id x2; struct _DNSServiceRef_t {} *x3; bool x4; bool x5; }*operationalBrowser;
@property (readonly) struct MTROTAProviderDelegateBridge { int (**x1)(); id x2; id x3; }*otaProviderDelegateBridge;
@property (readonly) struct MTRPersistentStorageDelegateBridge { int (**x1)(); id x2; id x3; }*persistentStorageDelegateBridge;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) struct RawKeySessionKeystore { int (**x1)(); }*sessionKeystore;
@property (readonly) struct MTRPersistentStorageDelegateBridge { int (**x1)(); id x2; id x3; }*storageDelegateBridge;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_assertCurrentQueueIsNotMatterQueue;
- (bool)advertiseOperational;
- (struct MTRAttestationTrustStoreBridge { int (**x1)(); id x2; }*)attestationTrustStoreBridge;
- (struct IgnoreCertificateValidityPeriodPolicy { int (**x1)(); }*)certificateValidityPolicy;
- (bool)checkForInitError:(bool)arg1 logMsg:(id)arg2;
- (bool)checkIsRunning:(id*)arg1;
- (id)chipWorkQueue;
- (void)cleanupInitObjects;
- (void)cleanupStartupObjects;
- (struct DeviceControllerFactory { unsigned short x1; struct DeviceControllerSystemState {} *x2; struct PersistentStorageDelegate {} *x3; struct OperationalKeystore {} *x4; struct OperationalCertificateStore {} *x5; struct CertificateValidityPolicy {} *x6; bool x7; }*)controllerFactory;
- (void)controllerShuttingDown:(id)arg1;
- (id)controllers;
- (struct os_unfair_lock_s { unsigned int x1; })controllersLock;
- (id)createController;
- (id)createControllerOnExistingFabric:(id)arg1 error:(id*)arg2;
- (id)createControllerOnNewFabric:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (struct DeviceAttestationVerifier { int (**x1)(); bool x2; }*)deviceAttestationVerifier;
- (bool)findMatchingFabric:(void*)arg1 params:(id)arg2 fabric:(const struct FabricInfo {}**)arg3;
- (struct GroupDataProvider { int (**x1)(); unsigned short x2; unsigned short x3; struct GroupListener {} *x4; }*)groupData;
- (void*)groupDataProvider;
- (void*)groupStorageDelegate;
- (id)init;
- (bool)isRunning;
- (struct PersistentStorageOperationalKeystore { int (**x1)(); struct PersistentStorageDelegate {} *x2; unsigned char x3; struct P256Keypair {} *x4; bool x5; bool x6; }*)keystore;
- (id)knownFabrics;
- (id)maybeInitializeOTAProvider:(id)arg1;
- (void*)opCertStore;
- (struct MTROperationalBrowser { id x1; id x2; struct _DNSServiceRef_t {} *x3; bool x4; bool x5; }*)operationalBrowser;
- (void)operationalInstanceAdded:(struct PeerId { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct MTROTAProviderDelegateBridge { int (**x1)(); id x2; id x3; }*)otaProviderDelegateBridge;
- (struct MTRPersistentStorageDelegateBridge { int (**x1)(); id x2; id x3; }*)persistentStorageDelegateBridge;
- (id)runningControllerForFabricIndex:(unsigned char)arg1;
- (struct RawKeySessionKeystore { int (**x1)(); }*)sessionKeystore;
- (void)setDeviceAttestationVerifier:(struct DeviceAttestationVerifier { int (**x1)(); bool x2; }*)arg1;
- (bool)startControllerFactory:(id)arg1 error:(id*)arg2;
- (void)stopControllerFactory;
- (struct MTRPersistentStorageDelegateBridge { int (**x1)(); id x2; id x3; }*)storageDelegateBridge;

@end
