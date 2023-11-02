
@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _storefrontIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *propertyListRepresentation;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyListRepresentation;
- (id)storefrontIdentifier;

@end
