
@interface HMAccessCodeUserInformation : NSObject <HMFObject> {
    NSUUID * _labelIdentifier;
    HMRemovedUserInfo * _removedUserInfo;
    NSString * _simpleLabel;
    HMUser * _user;
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
@property (readonly) HMUser *user;

+ (id)shortDescription;
+ (id)userInformationWithValue:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)createAccessCodeUserInformationValue;
- (id)description;
- (id)initWithRemovedUserInfo:(id)arg1;
- (id)initWithSimpleLabel:(id)arg1;
- (id)initWithSimpleLabel:(id)arg1 labelIdentifier:(id)arg2;
- (id)initWithSimpleLabel:(id)arg1 labelIdentifier:(id)arg2 user:(id)arg3 removedUserInfo:(id)arg4;
- (id)initWithUser:(id)arg1;
- (id)labelIdentifier;
- (id)privateDescription;
- (id)removedUserInfo;
- (id)shortDescription;
- (id)simpleLabel;
- (id)user;

@end
