
@interface AMSAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    NSArray * _enabledMediaKinds;
    <AMSRequestPresentationDelegate> * _presentationDelegate;
    AMSURLSession * _session;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *enabledMediaKinds;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AMSRequestPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) AMSURLSession *session;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)enabledMediaKinds;
- (id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3;
- (id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 presentationDelegate:(id)arg4;
- (id)perform;
- (id)presentationDelegate;
- (id)session;
- (void)setClientInfo:(id)arg1;
- (void)setSession:(id)arg1;

@end
