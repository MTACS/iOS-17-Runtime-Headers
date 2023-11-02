
@interface NINearbyAccessoryConfiguration : NIConfiguration {
    NIDiscoveryToken * _accessoryDiscoveryToken;
    long long  _backgroundMode;
    NSUUID * _bluetoothDeviceIdentifier;
    bool  _cameraAssistanceEnabled;
    NSDictionary * _debugParameters;
    NSData * _rawData;
}

@property (readonly, copy) NSData *accessoryConfigData;
@property (nonatomic, readonly, copy) NIDiscoveryToken *accessoryDiscoveryToken;
@property (nonatomic) long long backgroundMode;
@property (copy) NSUUID *bluetoothDeviceIdentifier;
@property (getter=isCameraAssistanceEnabled, nonatomic) bool cameraAssistanceEnabled;
@property (copy) NSDictionary *debugParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_internalIsCameraAssistanceEnabled;
- (id)accessoryConfigData;
- (id)accessoryDiscoveryToken;
- (long long)backgroundMode;
- (id)bluetoothDeviceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugParameters;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessoryData:(id)arg1 bluetoothPeerIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)isCameraAssistanceEnabled;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundMode:(long long)arg1;
- (void)setBluetoothDeviceIdentifier:(id)arg1;
- (void)setCameraAssistanceEnabled:(bool)arg1;
- (void)setDebugParameters:(id)arg1;

@end
