
@interface DMFFetchLocationRequest : DMFTaskRequest {
    NSString * _originator;
}

@property (nonatomic, copy) NSString *originator;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originator;
- (void)setOriginator:(id)arg1;

@end
