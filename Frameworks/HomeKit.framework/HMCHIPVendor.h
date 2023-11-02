
@interface HMCHIPVendor : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _appleVendor;
    NSNumber * _identifier;
    NSString * _name;
    bool  _systemCommissionerVendor;
}

@property (readonly, copy) NSUUID *UUID;
@property (getter=isAppleVendor) bool appleVendor;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (getter=isSystemCommissionerVendor) bool systemCommissionerVendor;

+ (id)UUIDFromIdentifier:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (bool)isAppleVendor;
- (bool)isEqual:(id)arg1;
- (bool)isSystemCommissionerVendor;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)privateDescription;
- (void)setAppleVendor:(bool)arg1;
- (void)setSystemCommissionerVendor:(bool)arg1;
- (id)shortDescription;

@end
