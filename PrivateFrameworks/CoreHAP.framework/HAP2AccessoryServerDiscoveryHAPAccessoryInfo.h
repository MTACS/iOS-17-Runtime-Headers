
@interface HAP2AccessoryServerDiscoveryHAPAccessoryInfo : HAP2AccessoryServerDiscoveryAccessoryInfo {
    unsigned long long  _category;
    unsigned long long  _configurationNumber;
    unsigned long long  _featureFlags;
    NSString * _model;
    NSString * _name;
    HMFVersion * _protocolVersion;
    NSData * _setupHash;
    unsigned long long  _stateNumber;
    unsigned char  _status;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned long long configurationNumber;
@property (nonatomic, readonly) unsigned long long featureFlags;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) HMFVersion *protocolVersion;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) unsigned long long stateNumber;
@property (nonatomic, readonly) unsigned char status;

- (void).cxx_destruct;
- (unsigned long long)category;
- (unsigned long long)configurationNumber;
- (unsigned long long)featureFlags;
- (id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2;
- (id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2 name:(id)arg3 model:(id)arg4 status:(unsigned char)arg5 category:(unsigned long long)arg6 configurationNumber:(unsigned long long)arg7 stateNumber:(unsigned long long)arg8 protocolVersion:(id)arg9 featureFlags:(unsigned long long)arg10 setupHash:(id)arg11;
- (id)model;
- (id)name;
- (id)protocolVersion;
- (id)setupHash;
- (unsigned long long)stateNumber;
- (unsigned char)status;

@end
