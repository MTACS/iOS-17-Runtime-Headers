
@interface HMIPersonSourceUUIDPair : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _personUUID;
    NSUUID * _sourceUUID;
}

@property (readonly, copy) NSString *UUIDPairString;
@property (readonly, copy) NSUUID *personUUID;
@property (readonly, copy) NSUUID *sourceUUID;

+ (id)personSourceUUIDPairFromPersonLink:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDPairString;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonUUID:(id)arg1 sourceUUID:(id)arg2;
- (id)initWithUUIDPairString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personUUID;
- (id)sourceUUID;

@end
