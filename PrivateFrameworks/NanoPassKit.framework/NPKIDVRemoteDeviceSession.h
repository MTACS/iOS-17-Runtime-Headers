
@interface NPKIDVRemoteDeviceSession : NSObject <NPKIDVRemoteDeviceNotificationManager, PKXPCServiceDelegate> {
    NSString * _deviceID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceIDLock;
    PKXPCService * _remoteService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionStatusLock;
    unsigned long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;

+ (void)sessionForDeviceID:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_confirmRemoteDeviceID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (void)_generateKeyWithType:(unsigned long long)arg1 credentialIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)addNotificationWithType:(unsigned long long)arg1 documentType:(unsigned long long)arg2 issuerName:(id)arg3 completion:(id /* block */)arg4;
- (void)configureWithPartition:(id)arg1 ackHandler:(id /* block */)arg2;
- (void)createCredentialInPartition:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialIdentifiersInPartitions:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialPreflightStatusForType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)credentialPreflightStatusForType:(unsigned long long)arg1 minOSVersion:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)deviceID;
- (void)elementsOfCredential:(id)arg1 elementIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)establishPrearmTrustV2:(id)arg1 completion:(id /* block */)arg2;
- (void)generateDeviceEncryptionKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generateKeySigningKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePresentmentKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePresentmentKeysForCredential:(id)arg1 numKeys:(long long)arg2 completion:(id /* block */)arg3;
- (void)getCASDCertificateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidateSession;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)arg1;
- (void)pairedWatchSEIDWithCompletion:(id /* block */)arg1;
- (void)prearmCredentialWithAuthorizationToken:(id)arg1 completion:(id /* block */)arg2;
- (void)propertiesOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)provisionCredentialWithType:(unsigned long long)arg1 metadata:(id)arg2 policyIdentifier:(id)arg3 credentialIdentifier:(id)arg4 attestations:(id)arg5 completion:(id /* block */)arg6;
- (void)registerForEvents:(unsigned long long)arg1 withRemoteProcessServiceName:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)setDeviceID:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (void)unregisterFromEvents:(unsigned long long)arg1 withRemoteProcessServiceName:(id)arg2 completion:(id /* block */)arg3;

@end
