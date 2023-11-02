
@interface CRKFetchInstructorEndpointRequest : CATTaskRequest {
    NSURL * _classroomAppBundleURL;
    NSString * _instructordBundleIdentifier;
}

@property (nonatomic, retain) NSURL *classroomAppBundleURL;
@property (nonatomic, copy) NSString *instructordBundleIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classroomAppBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)instructordBundleIdentifier;
- (void)setClassroomAppBundleURL:(id)arg1;
- (void)setInstructordBundleIdentifier:(id)arg1;

@end
