
@interface CRKFetchResourceRequest : CATTaskRequest {
    NSURL * _resourceURL;
}

@property (nonatomic, copy) NSURL *resourceURL;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resourceURL;
- (void)setResourceURL:(id)arg1;

@end
