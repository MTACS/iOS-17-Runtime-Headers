
@interface SPIndexInformation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    unsigned long long  _index;
    unsigned char  _sequence;
}

@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned char sequence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithBeaconIdentifier:(id)arg1 sequence:(unsigned char)arg2 index:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned char)sequence;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setSequence:(unsigned char)arg1;

@end
