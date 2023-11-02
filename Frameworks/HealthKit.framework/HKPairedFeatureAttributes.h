
@interface HKPairedFeatureAttributes : NSObject <NSCopying, NSSecureCoding> {
    HKFeatureAttributes * _localAttributes;
    HKFeatureAttributes * _pairedAttributes;
}

@property (nonatomic, readonly, copy) HKFeatureAttributes *companionAttributes;
@property (nonatomic, readonly, copy) HKFeatureAttributes *localAttributes;
@property (nonatomic, readonly, copy) HKFeatureAttributes *pairedAttributes;
@property (nonatomic, readonly, copy) HKFeatureAttributes *watchAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)companionAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalAttributes:(id)arg1 pairedAttributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localAttributes;
- (id)pairedAttributes;
- (id)watchAttributes;

@end
