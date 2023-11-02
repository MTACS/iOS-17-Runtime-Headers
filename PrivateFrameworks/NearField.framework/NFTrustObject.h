
@interface NFTrustObject : NSObject <NSSecureCoding>

+ (id)allowedXPCClasses;
+ (bool)supportsSecureCoding;

- (id)allowedXPCClasses;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
