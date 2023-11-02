
@interface AMSDelegateAuthenticateTask : AMSTask <AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSDictionary * _formData;
    AMSDelegateAuthenticateRequest * _request;
    AMSURLSession * _session;
    AMSBiometricsSignatureResult * _signatureResult;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *formData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSDelegateAuthenticateRequest *request;
@property (nonatomic, readonly) AMSURLSession *session;
@property (nonatomic, retain) AMSBiometricsSignatureResult *signatureResult;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_delegateAuthenticateResultFromUrlResult:(id)arg1;
- (id)_encodedURLRequestWithError:(id*)arg1;
- (void)_init;
- (id)_parseFormDataAsStringFromResult:(id)arg1;
- (id)_parseFormDataFromResult:(id)arg1;
- (id)_performDelegateAuthenticationWithError:(id*)arg1;
- (id)_urlRequestParameters;
- (id)account;
- (id)bag;
- (id)delegateAuthenticateUrl;
- (id)formData;
- (id)initWithBag:(id)arg1 account:(id)arg2;
- (id)initWithDelegateAuthenticateRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;
- (id)performDelegateAuthentication;
- (id)request;
- (id)session;
- (void)setAccount:(id)arg1;
- (void)setFormData:(id)arg1;
- (void)setSignatureResult:(id)arg1;
- (id)signatureResult;

@end
