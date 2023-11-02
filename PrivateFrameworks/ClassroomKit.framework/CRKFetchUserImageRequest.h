
@interface CRKFetchUserImageRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _userIdentifier;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
