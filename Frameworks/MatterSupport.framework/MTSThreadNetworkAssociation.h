
@interface MTSThreadNetworkAssociation : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _extendedPANID;
}

@property (readonly, copy) NSNumber *extendedPANID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedPANID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtendedPANID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
