
@interface HMHomeAccessCode : NSObject <HMFObject> {
    HMAccessCodeValue * _accessCodeValue;
    HMAccessCodeUserInformation * _userInformation;
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
@property (readonly) HMAccessCodeUserInformation *userInformation;

+ (id)homeAccessCodeWithValue:(id)arg1 home:(id)arg2;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)attributeDescriptions;
- (id)createHomeAccessCodeValue;
- (id)description;
- (id)initWithAccessCodeValue:(id)arg1 userInformation:(id)arg2;
- (id)privateDescription;
- (id)shortDescription;
- (id)userInformation;

@end
