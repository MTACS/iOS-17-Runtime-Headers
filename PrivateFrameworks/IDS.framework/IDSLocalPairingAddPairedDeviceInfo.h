
@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding> {
    NSData * _BTOutOfBandKey;
    NSData * _bluetoothMACAddress;
    NSUUID * _cbuuid;
    long long  _pairingProtocolVersion;
    long long  _pairingType;
    bool  _shouldPairDirectlyOverIPsec;
    bool  _supportsIPsecWithSPPLink;
}

@property (nonatomic, readonly) NSData *BTOutOfBandKey;
@property (nonatomic, retain) NSData *bluetoothMACAddress;
@property (nonatomic, readonly) NSUUID *cbuuid;
@property (nonatomic, readonly) long long pairingProtocolVersion;
@property (nonatomic) long long pairingType;
@property (nonatomic) bool shouldPairDirectlyOverIPsec;
@property (nonatomic) bool supportsIPsecWithSPPLink;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)BTOutOfBandKey;
- (id)bluetoothMACAddress;
- (id)cbuuid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (long long)pairingProtocolVersion;
- (long long)pairingType;
- (void)setBluetoothMACAddress:(id)arg1;
- (void)setPairingType:(long long)arg1;
- (void)setShouldPairDirectlyOverIPsec:(bool)arg1;
- (void)setSupportsIPsecWithSPPLink:(bool)arg1;
- (bool)shouldPairDirectlyOverIPsec;
- (bool)supportsIPsecWithSPPLink;

@end
