
@interface HMDNewPairedAccessoryServerInfo : NSObject {
    long long  _certificationStatus;
    NSString * _configurationAppIdentifier;
    <MKFAccessory> * _hostAccessory;
    HMDAccessoryNetworkCredential * _networkCredential;
    HMDAccessoryPairingEvent * _pairingEvent;
    NSUUID * _primaryAccessoryUUID;
    HAPAccessoryServer * _server;
}

@property (readonly) long long certificationStatus;
@property (readonly) NSString *configurationAppIdentifier;
@property (readonly) <MKFAccessory> *hostAccessory;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;
@property (readonly) NSUUID *primaryAccessoryUUID;
@property (readonly) HAPAccessoryServer *server;

- (void).cxx_destruct;
- (long long)certificationStatus;
- (id)configurationAppIdentifier;
- (id)description;
- (id)hostAccessory;
- (id)initWithServer:(id)arg1 primaryAccessoryUUID:(id)arg2 certificationStatus:(long long)arg3 configurationAppIdentifier:(id)arg4 hostAccessory:(id)arg5 networkCredential:(id)arg6 pairingEvent:(id)arg7;
- (id)networkCredential;
- (id)pairingEvent;
- (id)primaryAccessoryUUID;
- (id)server;

@end
