
@interface SOAuthorizationRequestParametersCore : NSObject <NSSecureCoding> {
    NSData * _auditTokenData;
    NSDictionary * _authorizationOptions;
    NSString * _callerBundleIdentifier;
    bool  _callerManaged;
    NSString * _callerTeamIdentifier;
    bool  _cfNetworkInterception;
    bool  _enableUserInteraction;
    NSDictionary * _extensionData;
    NSData * _httpBody;
    NSDictionary * _httpHeaders;
    NSString * _identifier;
    NSString * _impersonationBundleIdentifier;
    NSString * _localizedCallerDisplayName;
    NSString * _realm;
    NSString * _requestedOperation;
    long long  _responseCode;
    NSURL * _url;
    bool  _useInternalExtensions;
}

@property (nonatomic, retain) NSData *auditTokenData;
@property (nonatomic, retain) NSDictionary *authorizationOptions;
@property (nonatomic, copy) NSString *callerBundleIdentifier;
@property (getter=isCallerManaged, nonatomic) bool callerManaged;
@property (nonatomic, copy) NSString *callerTeamIdentifier;
@property (getter=isCFNetworkInterception, nonatomic) bool cfNetworkInterception;
@property (getter=isUserInteractionEnabled, nonatomic) bool enableUserInteraction;
@property (nonatomic, copy) NSDictionary *extensionData;
@property (nonatomic, copy) NSData *httpBody;
@property (nonatomic, copy) NSDictionary *httpHeaders;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *impersonationBundleIdentifier;
@property (nonatomic, copy) NSString *localizedCallerDisplayName;
@property (nonatomic, copy) NSString *realm;
@property (nonatomic, copy) NSString *requestedOperation;
@property (nonatomic) long long responseCode;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) bool useInternalExtensions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditTokenData;
- (id)authorizationOptions;
- (id)callerBundleIdentifier;
- (id)callerTeamIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionData;
- (id)httpBody;
- (id)httpHeaders;
- (id)identifier;
- (id)impersonationBundleIdentifier;
- (id)initWithAuthorizationParameters:(id)arg1;
- (id)initWithAuthorizationParametersCore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCFNetworkInterception;
- (bool)isCallerManaged;
- (bool)isUserInteractionEnabled;
- (id)localizedCallerDisplayName;
- (id)realm;
- (id)requestedOperation;
- (long long)responseCode;
- (void)setAuditTokenData:(id)arg1;
- (void)setAuthorizationOptions:(id)arg1;
- (void)setCallerBundleIdentifier:(id)arg1;
- (void)setCallerManaged:(bool)arg1;
- (void)setCallerTeamIdentifier:(id)arg1;
- (void)setCfNetworkInterception:(bool)arg1;
- (void)setEnableUserInteraction:(bool)arg1;
- (void)setExtensionData:(id)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setImpersonationBundleIdentifier:(id)arg1;
- (void)setLocalizedCallerDisplayName:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setRequestedOperation:(id)arg1;
- (void)setResponseCode:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseInternalExtensions:(bool)arg1;
- (id)url;
- (bool)useInternalExtensions;

@end
