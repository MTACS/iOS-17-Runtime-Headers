
@interface HMDUnpairedHAPAccessoryConfiguration : NSObject {
    NSNumber * _chipFabricID;
    NSUUID * _homeUUID;
    NSString * _isoCountryCode;
    HMDAccessoryNetworkCredential * _networkCredential;
    bool  _requiresUserConsent;
    NSString * _setupCode;
    id /* block */  _setupCodeProvider;
}

@property (copy) NSNumber *chipFabricID;
@property (copy) NSUUID *homeUUID;
@property (copy) NSString *isoCountryCode;
@property (retain) HMDAccessoryNetworkCredential *networkCredential;
@property bool requiresUserConsent;
@property (copy) NSString *setupCode;
@property (copy) id /* block */ setupCodeProvider;

- (void).cxx_destruct;
- (id)chipFabricID;
- (id)homeUUID;
- (id)isoCountryCode;
- (id)networkCredential;
- (bool)requiresUserConsent;
- (void)setChipFabricID:(id)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setNetworkCredential:(id)arg1;
- (void)setRequiresUserConsent:(bool)arg1;
- (void)setSetupCode:(id)arg1;
- (void)setSetupCodeProvider:(id /* block */)arg1;
- (id)setupCode;
- (id /* block */)setupCodeProvider;

@end
