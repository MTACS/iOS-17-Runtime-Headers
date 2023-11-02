
@interface AMSUIWebNetworkAction : AMSUIWebAction {
    NSURL * _URL;
    ACAccount * _account;
    NSString * _body;
    NSString * _gsTokenIdentifier;
    NSDictionary * _headers;
    bool  _includeAuthKitTokens;
    bool  _includeiCloudTokens;
    NSString * _method;
    bool  _requiresCellularAccess;
    NSString * _signatureData;
    bool  _usePrimaryKeychain;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSString *gsTokenIdentifier;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic) bool includeAuthKitTokens;
@property (nonatomic) bool includeiCloudTokens;
@property (nonatomic, retain) NSString *method;
@property (nonatomic) bool requiresCellularAccess;
@property (nonatomic, retain) NSString *signatureData;
@property (nonatomic) bool usePrimaryKeychain;

- (void).cxx_destruct;
- (id)URL;
- (id)_createSession;
- (id)account;
- (id)body;
- (id)gsTokenIdentifier;
- (id)headers;
- (bool)includeAuthKitTokens;
- (bool)includeiCloudTokens;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)method;
- (bool)requiresCellularAccess;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setGsTokenIdentifier:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setIncludeAuthKitTokens:(bool)arg1;
- (void)setIncludeiCloudTokens:(bool)arg1;
- (void)setMethod:(id)arg1;
- (void)setRequiresCellularAccess:(bool)arg1;
- (void)setSignatureData:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUsePrimaryKeychain:(bool)arg1;
- (id)signatureData;
- (bool)usePrimaryKeychain;

@end
