
@interface CARSessionRequestHost : NSObject <NSSecureCoding> {
    NSData * _authenticationCertificateSerial;
    NSString * _carplayWiFiUUID;
    NSString * _deviceIdentifier;
    NSString * _displayName;
    NSUUID * _pairedVehicleIdentifier;
    long long  _port;
    NSString * _publicKey;
    NSString * _sourceVersion;
    bool  _supportsMutualAuthentication;
    bool  _wiredCarPlaySimulator;
    NSArray * _wiredIPv6Addresses;
    NSArray * _wirelessIPv6Addresses;
}

@property (nonatomic, copy) NSData *authenticationCertificateSerial;
@property (nonatomic, copy) NSString *carplayWiFiUUID;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSUUID *pairedVehicleIdentifier;
@property (nonatomic) long long port;
@property (nonatomic, copy) NSString *publicKey;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) bool supportsMutualAuthentication;
@property (getter=isWiredCarPlaySimulator, nonatomic) bool wiredCarPlaySimulator;
@property (nonatomic, copy) NSArray *wiredIPv6Addresses;
@property (nonatomic, copy) NSArray *wirelessIPv6Addresses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationCertificateSerial;
- (id)carplayWiFiUUID;
- (id)description;
- (id)deviceIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 wiredIPv6Addresses:(id)arg2 wirelessIPv6Addresses:(id)arg3 port:(long long)arg4 carplayWiFiUUID:(id)arg5 deviceIdentifier:(id)arg6 publicKey:(id)arg7 sourceVersion:(id)arg8 supportsMutualAuthentication:(bool)arg9 authenticationCertificateSerial:(id)arg10 pairedVehicleIdentifier:(id)arg11 wiredCarPlaySimulator:(bool)arg12;
- (id)initWithHostProperties:(id)arg1;
- (bool)isWiredCarPlaySimulator;
- (id)pairedVehicleIdentifier;
- (long long)port;
- (id)publicKey;
- (void)setAuthenticationCertificateSerial:(id)arg1;
- (void)setCarplayWiFiUUID:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setPairedVehicleIdentifier:(id)arg1;
- (void)setPort:(long long)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setSupportsMutualAuthentication:(bool)arg1;
- (void)setWiredCarPlaySimulator:(bool)arg1;
- (void)setWiredIPv6Addresses:(id)arg1;
- (void)setWirelessIPv6Addresses:(id)arg1;
- (id)sourceVersion;
- (bool)supportsMutualAuthentication;
- (id)wiredIPv6Addresses;
- (id)wirelessIPv6Addresses;

@end
