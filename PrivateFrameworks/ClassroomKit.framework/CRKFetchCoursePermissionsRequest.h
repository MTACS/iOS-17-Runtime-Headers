
@interface CRKFetchCoursePermissionsRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;

@end
