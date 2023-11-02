
@interface CDPCustodianRecoveryInfo : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _custodianUUID;
    NSData * _wrappedRKC;
    NSData * _wrappingKey;
}

@property (nonatomic, readonly, copy) NSUUID *custodianUUID;
@property (nonatomic, readonly, copy) NSData *wrappedRKC;
@property (nonatomic, readonly, copy) NSData *wrappingKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWrappedRKC:(id)arg1 wrappingKey:(id)arg2 custodianUUID:(id)arg3;
- (id)wrappedRKC;
- (id)wrappingKey;

@end
