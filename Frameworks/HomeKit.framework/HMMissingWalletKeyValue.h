
@interface HMMissingWalletKeyValue : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _accessoryUUID;
    NSUUID * _userUUID;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *userUUID;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;
+ (id)valueForMissingWalletKey:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 userUUID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;
- (id)userUUID;

@end
