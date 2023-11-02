
@interface AMSAuthorizeMachineTask : AMSTask <AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    AMSAuthenticateRequest * _authenticateRequest;
    unsigned long long  _authorizeReason;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    bool  _deauthorize;
    NSNumber * _familyMemberAccountDSID;
    NSString * _logKey;
    <AMSRequestPresentationDelegate> * _presentationDelegate;
    AMSURLSession * _session;
    ACAccount * _validAccount;
}

@property (nonatomic, retain) AMSAuthenticateRequest *authenticateRequest;
@property unsigned long long authorizeReason;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (getter=isDeauthorize, nonatomic) bool deauthorize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *familyMemberAccountDSID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic) <AMSRequestPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) AMSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) ACAccount *validAccount;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)_authenticate;
- (id)_buildRequest;
- (id)_buildRequestParametersWithError:(id*)arg1;
- (id)_buildRequestTask;
- (id)_checkRequestThrottle;
- (id)_keybagSyncStringForAccount:(id)arg1 withTransactionType:(unsigned int)arg2 error:(id*)arg3;
- (id)_performAuthorization;
- (id)account;
- (id)authenticateRequest;
- (unsigned long long)authorizeReason;
- (id)bag;
- (id)clientInfo;
- (id)familyMemberAccountDSID;
- (id)initWithAccount:(id)arg1 authorizeReason:(unsigned long long)arg2 bag:(id)arg3;
- (id)initWithUsername:(id)arg1 authorizeReason:(unsigned long long)arg2 bag:(id)arg3 presentationDelegate:(id)arg4;
- (bool)isDeauthorize;
- (id)logKey;
- (id)performAuthorization;
- (id)performDeauthorization;
- (id)presentationDelegate;
- (id)session;
- (void)setAuthenticateRequest:(id)arg1;
- (void)setAuthorizeReason:(unsigned long long)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDeauthorize:(bool)arg1;
- (void)setFamilyMemberAccountDSID:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setValidAccount:(id)arg1;
- (id)validAccount;

@end
