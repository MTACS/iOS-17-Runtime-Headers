
@interface SPBeaconGroup : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _beaconIdentifiers;
    NSDictionary * _beaconMap;
    long long  _classification;
    NSUUID * _identifier;
    bool  _isClassicConnected;
    bool  _isConnected;
    bool  _isFindMyNetworkEnabled;
    bool  _isPairingComplete;
    SPLostModeInfo * _lostModeInfo;
    NSData * _macAddress;
    NSSet * _multipartStatus;
    NSString * _name;
    long long  _status;
    NSDictionary * _taskInformation;
    long long  _version;
}

@property (nonatomic, copy) NSSet *beaconIdentifiers;
@property (nonatomic, copy) NSDictionary *beaconMap;
@property (nonatomic) long long classification;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) bool isClassicConnected;
@property (nonatomic) bool isConnected;
@property (nonatomic) bool isFindMyNetworkEnabled;
@property (nonatomic) bool isPairingComplete;
@property (nonatomic, copy) SPLostModeInfo *lostModeInfo;
@property (nonatomic, copy) NSData *macAddress;
@property (nonatomic, copy) NSSet *multipartStatus;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSDictionary *taskInformation;
@property (nonatomic) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifiers;
- (id)beaconMap;
- (long long)classification;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isClassicConnected;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isFindMyNetworkEnabled;
- (bool)isPairingComplete;
- (id)lostModeInfo;
- (id)macAddress;
- (id)multipartStatus;
- (id)name;
- (void)setBeaconIdentifiers:(id)arg1;
- (void)setBeaconMap:(id)arg1;
- (void)setClassification:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsClassicConnected:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setIsFindMyNetworkEnabled:(bool)arg1;
- (void)setIsPairingComplete:(bool)arg1;
- (void)setLostModeInfo:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setMultipartStatus:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTaskInformation:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)status;
- (id)taskInformation;
- (long long)version;

@end
