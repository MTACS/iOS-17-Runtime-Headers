
@interface CWFRangingPeer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MACAddress;
    NSData * _PMK;
    NSData * _identifier;
    unsigned long long  _numberOfMeasurements;
    bool  _useCoreRotation;
}

@property (nonatomic, copy) NSString *MACAddress;
@property (nonatomic, copy) NSData *PMK;
@property (nonatomic, copy) NSData *identifier;
@property (nonatomic) unsigned long long numberOfMeasurements;
@property (nonatomic) bool useCoreRotation;

+ (id)rangingPeerWithMACAddress:(id)arg1 PMK:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MACAddress;
- (id)PMK;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRangingPeer:(id)arg1;
- (unsigned long long)numberOfMeasurements;
- (void)setIdentifier:(id)arg1;
- (void)setMACAddress:(id)arg1;
- (void)setNumberOfMeasurements:(unsigned long long)arg1;
- (void)setPMK:(id)arg1;
- (void)setUseCoreRotation:(bool)arg1;
- (bool)useCoreRotation;

@end
