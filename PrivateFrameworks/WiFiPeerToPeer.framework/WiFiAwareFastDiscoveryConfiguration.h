
@interface WiFiAwareFastDiscoveryConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _instantCommunicationChannel;
    unsigned char  _peerBandInformation;
}

@property (nonatomic, copy) NSNumber *instantCommunicationChannel;
@property (nonatomic) unsigned char peerBandInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instantCommunicationChannel;
- (bool)isEqual:(id)arg1;
- (unsigned char)peerBandInformation;
- (void)setInstantCommunicationChannel:(id)arg1;
- (void)setPeerBandInformation:(unsigned char)arg1;

@end
