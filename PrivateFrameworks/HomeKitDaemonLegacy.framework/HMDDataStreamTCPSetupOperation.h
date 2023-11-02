
@interface HMDDataStreamTCPSetupOperation : HMDDataStreamSetupOperation {
    NSData * _accessoryKeySalt;
    NSData * _controllerKeySalt;
    HMFNetAddress * _remoteNetAddress;
    long long  _remoteTcpPort;
    HAPSecuritySessionEncryption * _sessionEncryption;
}

@property (nonatomic, retain) NSData *accessoryKeySalt;
@property (nonatomic, readonly) NSData *controllerKeySalt;
@property (nonatomic, retain) HMFNetAddress *remoteNetAddress;
@property (nonatomic) long long remoteTcpPort;
@property (nonatomic, retain) HAPSecuritySessionEncryption *sessionEncryption;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createTCPTransport;
- (void)_finishStreamTransport;
- (id)_fullKeySalt;
- (void)_generateStreamKeys;
- (bool)_isComplete;
- (id)accessoryKeySalt;
- (id)controllerKeySalt;
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;
- (void)processTransportSetupResponse:(id)arg1;
- (id)remoteNetAddress;
- (long long)remoteTcpPort;
- (id)sessionEncryption;
- (void)setAccessoryKeySalt:(id)arg1;
- (void)setRemoteNetAddress:(id)arg1;
- (void)setRemoteTcpPort:(long long)arg1;
- (void)setSessionEncryption:(id)arg1;
- (void)startSetup;

@end
