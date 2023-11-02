
@interface VGChargingNetwork : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _globalBrandID;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long globalBrandID;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)globalBrandID;
- (unsigned long long)hash;
- (id)initWithBrandInfoMapping:(id)arg1;
- (id)initWithChargingNetworkStorage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
