
@interface NRDevicePairingTarget : NSObject <NSCopying, NSSecureCoding> {
    NSData * _authData;
    unsigned long long  _authMethod;
    NRDevicePairingCandidate * _candidate;
    NRDeviceOperationalProperties * _operationalProperties;
    NRDevicePairingProperties * _properties;
}

@property (nonatomic, copy) NSData *authData;
@property (nonatomic) unsigned long long authMethod;
@property (nonatomic, retain) NRDevicePairingCandidate *candidate;
@property (nonatomic, copy) NRDeviceOperationalProperties *operationalProperties;
@property (nonatomic, copy) NRDevicePairingProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authData;
- (unsigned long long)authMethod;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationalProperties;
- (id)properties;
- (void)setAuthData:(id)arg1;
- (void)setAuthMethod:(unsigned long long)arg1;
- (void)setCandidate:(id)arg1;
- (void)setOperationalProperties:(id)arg1;
- (void)setProperties:(id)arg1;

@end
