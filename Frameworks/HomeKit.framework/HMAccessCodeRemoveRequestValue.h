
@interface HMAccessCodeRemoveRequestValue : NSObject <HMAccessCodeModificationRequestValue, HMFObject, NSCopying, NSSecureCoding> {
    HMAccessoryAccessCodeValue * _accessoryAccessCodeValue;
    NSString * _guestName;
    NSUUID * _userUUID;
}

@property (readonly, copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *guestName;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) NSUUID *userUUID;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryAccessCodeValue;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)guestName;
- (unsigned long long)hash;
- (id)initWithAccessoryAccessCodeValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (void)setGuestName:(id)arg1;
- (void)setUserUUID:(id)arg1;
- (id)shortDescription;
- (id)userUUID;

@end
