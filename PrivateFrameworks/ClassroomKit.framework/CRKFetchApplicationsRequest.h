
@interface CRKFetchApplicationsRequest : CATTaskRequest {
    NSArray * _bundleIdentifiers;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;

@end
