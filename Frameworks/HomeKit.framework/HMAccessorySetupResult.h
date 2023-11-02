
@interface HMAccessorySetupResult : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSArray * _accessoryUniqueIdentifiers;
    NSUUID * _homeUniqueIdentifier;
}

@property (readonly, copy) NSArray *accessoryUniqueIdentifiers;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUniqueIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryUniqueIdentifiers;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeUniqueIdentifier:(id)arg1 accessoryUniqueIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;

@end
