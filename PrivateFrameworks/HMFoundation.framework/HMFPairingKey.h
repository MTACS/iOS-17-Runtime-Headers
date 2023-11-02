
@interface HMFPairingKey : HMFObject <NSCopying, NSSecureCoding> {
    NSData * _data;
}

@property (nonatomic, readonly, copy) NSData *data;

+ (void)setClassMappingForNSCoder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingKeyData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
