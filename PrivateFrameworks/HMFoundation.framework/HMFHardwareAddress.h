
@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding> {
    NSData * _data;
    NSString * _formattedString;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *formattedString;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long length;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned long long)hash;
- (id)initWithAddressData:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddress:(id)arg1;
- (unsigned long long)length;
- (id)propertyDescription;

@end
