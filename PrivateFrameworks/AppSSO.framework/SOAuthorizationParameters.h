
@interface SOAuthorizationParameters : NSObject {
    SOAuthorizationParametersCore * _authorizationParametersCore;
    NSString * _impersonationBundleIdentifier;
}

@property (nonatomic, retain) NSData *auditTokenData;
@property (nonatomic, readonly) SOAuthorizationParametersCore *authorizationParametersCore;
@property (getter=isCFNetworkInterception, setter=setCFNetworkInterception:, nonatomic) bool cfNetworkInterception;
@property (nonatomic, retain) NSData *httpBody;
@property (nonatomic, retain) NSDictionary *httpHeaders;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *impersonationBundleIdentifier;
@property (nonatomic, copy) NSString *operation;
@property (nonatomic) long long responseCode;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) bool useInternalExtensions;

- (void).cxx_destruct;
- (id)auditTokenData;
- (id)authorizationParametersCore;
- (id)httpBody;
- (id)httpHeaders;
- (id)identifier;
- (id)impersonationBundleIdentifier;
- (id)init;
- (bool)isCFNetworkInterception;
- (id)operation;
- (long long)responseCode;
- (void)setAuditTokenData:(id)arg1;
- (void)setCFNetworkInterception:(bool)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setImpersonationBundleIdentifier:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setResponseCode:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseInternalExtensions:(bool)arg1;
- (id)url;
- (bool)useInternalExtensions;

@end
