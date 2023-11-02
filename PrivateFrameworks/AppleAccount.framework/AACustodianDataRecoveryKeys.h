
@interface AACustodianDataRecoveryKeys : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _custodianUUID;
    NSData * _wrappedRKC;
    NSData * _wrappingKey;
}

@property (nonatomic, copy) NSUUID *custodianUUID;
@property (nonatomic, copy) NSData *wrappedRKC;
@property (nonatomic, copy) NSData *wrappingKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWrappedRKC:(id)arg1 wrappingKey:(id)arg2 custodianUUID:(id)arg3;
- (void)setCustodianUUID:(id)arg1;
- (void)setWrappedRKC:(id)arg1;
- (void)setWrappingKey:(id)arg1;
- (id)wrappedRKC;
- (id)wrappingKey;

@end
