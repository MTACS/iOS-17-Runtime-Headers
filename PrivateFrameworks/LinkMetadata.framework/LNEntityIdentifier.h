
@interface LNEntityIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _instanceIdentifier;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly, copy) NSString *instanceIdentifier;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (nonatomic, readonly, copy) NSString *typeName;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 instanceIdentifier:(id)arg2;
- (id)initWithValue:(id)arg1 scope:(long long)arg2 typeName:(id)arg3;
- (id)initWithValue:(id)arg1 typeName:(id)arg2;
- (id)instanceIdentifier;
- (bool)isEqual:(id)arg1;
- (long long)scope;
- (id)typeIdentifier;
- (id)typeName;
- (id)value;

@end
