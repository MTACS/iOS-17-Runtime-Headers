
@interface PKPeerPaymentRecurringPaymentFundingSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _dpanIdentifier;
    NSString * _fpanIdentifier;
    NSString * _mpanIdentifier;
    NSString * _name;
    long long  _network;
    NSString * _suffix;
    unsigned long long  _type;
}

@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (setter=setFPANIdentifier:, nonatomic, copy) NSString *fpanIdentifier;
@property (setter=setMPANIdentifier:, nonatomic, copy) NSString *mpanIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long network;
@property (nonatomic, copy) NSString *suffix;
@property (nonatomic) unsigned long long type;

+ (id)fundingSourceWithDictionary:(id)arg1;
+ (id)fundingSourceWithPass:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)fpanIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mpanIdentifier;
- (id)name;
- (long long)network;
- (void)setDPANIdentifier:(id)arg1;
- (void)setFPANIdentifier:(id)arg1;
- (void)setMPANIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNetwork:(long long)arg1;
- (void)setSuffix:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)suffix;
- (unsigned long long)type;

@end
