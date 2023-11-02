
@interface DMFFetchSecurityInformationRequest : DMFTaskRequest {
    NSArray * _infoKeys;
}

@property (nonatomic, copy) NSArray *infoKeys;

+ (id)allPlatformSecurityInfoKeys;
+ (Class)allowlistedClassForResultObject;
+ (id)currentPlatformSecurityInfoKeys;
+ (id)iOSSecurityInfoKeys;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)macOSSecurityInfoKeys;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (id)tvOSSecurityInfoKeys;
+ (id)watchOSSecurityInfoKeys;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)infoKeys;
- (id)initWithCoder:(id)arg1;
- (void)setInfoKeys:(id)arg1;

@end
