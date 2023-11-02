
@interface MSServiceAccount : NSObject <NSSecureCoding> {
    NSString * _accountName;
    NSString * _authorizationScope;
    NSURL * _authorizationTokenURL;
    NSString * _clientID;
    NSString * _clientSecret;
    NSURL * _configurationURL;
    NSArray * _intentExamples;
    NSUUID * _serviceID;
    NSString * _serviceName;
    NSSet * _supportedMediaIntents;
}

@property (nonatomic, readonly, copy) NSString *accountName;
@property (nonatomic, copy) NSString *authorizationScope;
@property (nonatomic, copy) NSURL *authorizationTokenURL;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) NSString *clientSecret;
@property (nonatomic, copy) NSURL *configurationURL;
@property (nonatomic, readonly, copy) NSArray *intentExamples;
@property (nonatomic, copy) NSUUID *serviceID;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) NSSet *supportedMediaIntents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountName;
- (id)authorizationScope;
- (id)authorizationTokenURL;
- (id)clientID;
- (id)clientSecret;
- (id)configurationURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1 accountName:(id)arg2;
- (id)intentExamples;
- (id)serviceID;
- (id)serviceName;
- (void)setAuthorizationScope:(id)arg1;
- (void)setAuthorizationTokenURL:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setClientSecret:(id)arg1;
- (void)setConfigurationURL:(id)arg1;
- (void)setServiceID:(id)arg1;
- (id)supportedMediaIntents;

@end
