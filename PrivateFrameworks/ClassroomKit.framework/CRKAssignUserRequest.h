
@interface CRKAssignUserRequest : CATTaskRequest {
    NSString * _appleID;
    NSString * _displayName;
    NSArray * _enrolledCourseIdentifiers;
    NSString * _familyName;
    NSString * _fullScreenImageURL;
    NSString * _givenName;
    NSNumber * _groupID;
    NSString * _imageURL;
    NSString * _passcodeType;
    NSString * _password;
    NSString * _userIdentifier;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *enrolledCourseIdentifiers;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *fullScreenImageURL;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSString *imageURL;
@property (nonatomic, copy) NSString *passcodeType;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleID;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)enrolledCourseIdentifiers;
- (id)familyName;
- (id)fullScreenImageURL;
- (id)givenName;
- (id)groupID;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)passcodeType;
- (id)password;
- (void)setAppleID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnrolledCourseIdentifiers:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFullScreenImageURL:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setPasscodeType:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
