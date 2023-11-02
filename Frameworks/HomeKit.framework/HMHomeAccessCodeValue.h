
@interface HMHomeAccessCodeValue : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    HMAccessCodeValue * _accessCodeValue;
    HMAccessCodeUserInformationValue * _userInformationValue;
}

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) HMAccessCodeUserInformationValue *userInformationValue;

+ (id)homeAccessCodeValueWithStringValue:(id)arg1 label:(id)arg2;
+ (id)homeAccessCodeValueWithStringValue:(id)arg1 removedUserInfo:(id)arg2;
+ (id)homeAccessCodeValueWithStringValue:(id)arg1 userUUID:(id)arg2;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessCodeValue:(id)arg1 userInformationValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;
- (id)userInformationValue;

@end
