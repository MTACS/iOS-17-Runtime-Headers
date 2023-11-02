
@interface NRDevicePairingProperties : NRDeviceProperties {
    NSData * _bluetoothMACAddress;
    bool  _isAltAccountPairing;
    NSData * _outOfBandKey;
    bool  _pairWithSPPLink;
    NSDictionary * _peerEndpointDictionary;
    bool  _wasInitiallySetupUsingIDSPairing;
}

@property (nonatomic, retain) NSData *awdlAddressData;
@property (nonatomic, retain) NSData *bluetoothMACAddress;
@property (nonatomic) bool isAltAccountPairing;
@property (nonatomic, retain) NSData *outOfBandKey;
@property (nonatomic) bool pairWithSPPLink;
@property (nonatomic, retain) NSDictionary *peerEndpointDictionary;
@property (nonatomic) bool wasInitiallySetupUsingIDSPairing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)awdlAddressData;
- (id)bluetoothMACAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAltAccountPairing;
- (id)outOfBandKey;
- (bool)pairWithSPPLink;
- (id)peerEndpointDictionary;
- (void)setAwdlAddressData:(id)arg1;
- (void)setBluetoothMACAddress:(id)arg1;
- (void)setIsAltAccountPairing:(bool)arg1;
- (void)setOutOfBandKey:(id)arg1;
- (void)setPairWithSPPLink:(bool)arg1;
- (void)setPeerEndpointDictionary:(id)arg1;
- (void)setWasInitiallySetupUsingIDSPairing:(bool)arg1;
- (bool)wasInitiallySetupUsingIDSPairing;

@end
