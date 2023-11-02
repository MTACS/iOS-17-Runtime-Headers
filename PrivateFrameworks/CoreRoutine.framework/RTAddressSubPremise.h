
@interface RTAddressSubPremise : NSObject <NSCopying, NSSecureCoding> {
    NSString * _subPremise;
    long long  _subPremiseType;
}

@property (nonatomic, readonly, copy) NSString *subPremise;
@property (nonatomic, readonly) long long subPremiseType;

+ (id)stringForSubPremiseType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubPremise:(id)arg1 subPremiseType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddressSubPremise:(id)arg1;
- (id)subPremise;
- (long long)subPremiseType;

@end
