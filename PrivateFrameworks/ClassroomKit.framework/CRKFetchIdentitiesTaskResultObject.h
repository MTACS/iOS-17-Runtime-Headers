
@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject {
    NSDictionary * _courseIdentityInfosByGroupIdentifier;
}

@property (nonatomic, copy) NSDictionary *courseIdentityInfosByGroupIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentityInfosByGroupIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCourseIdentityInfosByGroupIdentifier:(id)arg1;

@end
