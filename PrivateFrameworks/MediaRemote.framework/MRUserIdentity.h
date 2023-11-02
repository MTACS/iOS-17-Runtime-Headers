
@interface MRUserIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _MRUserIdentityProtobuf *protobuf;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) long long type;

+ (id)basicIdentityWithIdentifier:(id)arg1 displayName:(id)arg2;
+ (id)resolvableIdentityWithIdentifier:(id)arg1;
+ (id)resolvableIdentityWithIdentifier:(id)arg1 displayName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 type:(long long)arg3;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithProtobufData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (id)protobufData;
- (long long)type;

@end
