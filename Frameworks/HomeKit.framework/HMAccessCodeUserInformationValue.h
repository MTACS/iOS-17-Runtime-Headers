
@interface HMAccessCodeUserInformationValue : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _labelIdentifier;
    HMRemovedUserInfo * _removedUserInfo;
    NSString * _simpleLabel;
    NSUUID * _userUUID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *labelIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *simpleLabel;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *userUUID;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSimpleLabel:(id)arg1 labelIdentifier:(id)arg2 userUUID:(id)arg3 removedUserInfo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)labelIdentifier;
- (id)privateDescription;
- (id)removedUserInfo;
- (id)shortDescription;
- (id)simpleLabel;
- (id)userUUID;

@end
