
@interface HMAccessoryAccessCodeValue : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    HMAccessCodeValue * _accessCodeValue;
    NSUUID * _accessoryUUID;
    bool  _hasRestrictions;
    NSNumber * _uniqueIdentifier;
}

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *uniqueIdentifier;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRestrictions;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 accessCodeValue:(id)arg2 uniqueIdentifier:(id)arg3 hasRestrictions:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;
- (id)uniqueIdentifier;

@end
