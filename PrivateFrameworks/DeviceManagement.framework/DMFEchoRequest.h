
@interface DMFEchoRequest : DMFTaskRequest {
    NSString * _echo;
    NSString * _resultStatus;
}

@property (nonatomic, copy) NSString *echo;
@property (nonatomic, copy) NSString *resultStatus;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)echo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultStatus;
- (void)setEcho:(id)arg1;
- (void)setResultStatus:(id)arg1;

@end
