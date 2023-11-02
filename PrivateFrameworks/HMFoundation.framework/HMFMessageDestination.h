
@interface HMFMessageDestination : HMFObject <HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _target;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *target;

+ (id)allMessageDestinations;
+ (id)allMessageTargets;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)target;

@end
