
@interface HMBLocalZoneIDRow : HMFObject <HMBLocalZoneID, NSCopying, NSSecureCoding> {
    NSString * _name;
    NSData * _token;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *token;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 token:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)name;
- (id)token;

@end
