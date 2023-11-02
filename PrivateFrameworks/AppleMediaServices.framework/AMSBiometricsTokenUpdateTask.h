
@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    NSDictionary * _additionalDialogMetrics;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    <AMSRequestPresentationDelegate> * _presentationDelegate;
    AMSURLSession * _session;
    bool  _shouldGenerateKeysOnly;
    bool  _shouldPromptUser;
    bool  _shouldRequestConfirmation;
    bool  _userInitiated;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalDialogMetrics;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AMSRequestPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) AMSURLSession *session;
@property (nonatomic) bool shouldGenerateKeysOnly;
@property (nonatomic) bool shouldPromptUser;
@property (nonatomic) bool shouldRequestConfirmation;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (id)_performBiometricsTokenUpdate;
- (id)account;
- (id)additionalDialogMetrics;
- (id)bag;
- (id)clientInfo;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (bool)isUserInitiated;
- (id)performUpdate;
- (id)presentationDelegate;
- (id)session;
- (void)setAdditionalDialogMetrics:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldGenerateKeysOnly:(bool)arg1;
- (void)setShouldPromptUser:(bool)arg1;
- (void)setShouldRequestConfirmation:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)shouldGenerateKeysOnly;
- (bool)shouldPromptUser;
- (bool)shouldRequestConfirmation;

@end
