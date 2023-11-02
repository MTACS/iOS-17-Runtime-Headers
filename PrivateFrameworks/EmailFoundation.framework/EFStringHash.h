
@interface EFStringHash : NSObject <EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    long long  _primitiveHash;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *hexStringValue;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) long long primitiveHash;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_hexStringFromHash:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hexStringValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithHash:(long long)arg1;
- (id)initWithMD5Digest:(id)arg1;
- (id)initWithString:(id)arg1;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (long long)primitiveHash;
- (id)redactedStringValue;
- (id)stringValue;

@end
