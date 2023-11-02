
@interface HMFDigest : HMFObject <HMFObject, NSCopying, NSSecureCoding> {
    long long  _algorithm;
    NSData * _value;
}

@property (readonly) long long algorithm;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSData *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAlgorithm:(long long)arg1 value:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyDescription;
- (id)value;

@end
