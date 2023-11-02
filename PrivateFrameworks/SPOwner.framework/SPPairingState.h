
@interface SPPairingState : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    NSData * _macAddress;
    NSNumber * _pairingEpoch;
    long long  _pairingType;
    unsigned char  _partId;
    long long  _status;
}

@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, copy) NSData *macAddress;
@property (nonatomic, copy) NSNumber *pairingEpoch;
@property (nonatomic) long long pairingType;
@property (nonatomic) unsigned char partId;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 beaconIdentifier:(id)arg2 macAddress:(id)arg3 pairingEpoch:(id)arg4 partId:(unsigned char)arg5 pairingType:(long long)arg6;
- (id)macAddress;
- (id)pairingEpoch;
- (long long)pairingType;
- (unsigned char)partId;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setPairingEpoch:(id)arg1;
- (void)setPairingType:(long long)arg1;
- (void)setPartId:(unsigned char)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
