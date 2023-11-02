
@interface NRDeviceProperties : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _pairingProtocolVersion;
    unsigned short  _peerNetworkRelayVersion;
}

@property (nonatomic) unsigned long long pairingProtocolVersion;
@property (nonatomic) unsigned short peerNetworkRelayVersion;

+ (unsigned short)getNetworkRelayVersion;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)pairingProtocolVersion;
- (unsigned short)peerNetworkRelayVersion;
- (void)setPairingProtocolVersion:(unsigned long long)arg1;
- (void)setPeerNetworkRelayVersion:(unsigned short)arg1;

@end
