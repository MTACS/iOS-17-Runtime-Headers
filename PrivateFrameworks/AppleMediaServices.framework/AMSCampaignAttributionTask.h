
@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer> {
    NSURL * _URL;
    AMSURLSession * _URLSession;
    ACAccount * _account;
    NSArray * _additionalQueryItems;
    <AMSBagProtocol> * _bag;
    AMSCampaignAttributor * _campaignAttributor;
    AMSProcessInfo * _clientInfo;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) AMSURLSession *URLSession;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSArray *additionalQueryItems;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSCampaignAttributor *campaignAttributor;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isCampaignAttributorV2Enabled;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)URL;
- (id)URLSession;
- (id)_buildProcessRedirectURLWithEndpointURL:(id)arg1 error:(id*)arg2;
- (id)_encodeRequestForURL:(id)arg1 error:(id*)arg2;
- (id)_parseAllowedQueryParamsFromInfo:(id)arg1 error:(id*)arg2;
- (id)_parseCookiesFromResult:(id)arg1;
- (id)_parseEndpointURLFromInfo:(id)arg1 error:(id*)arg2;
- (id)_parseRedirectURLFromResult:(id)arg1 error:(id*)arg2;
- (id)_processRedirectWithEndpointURL:(id)arg1 error:(id*)arg2;
- (id)_processRedirectWithRequest:(id)arg1 error:(id*)arg2;
- (id)_queryItemNames;
- (id)_retrieveProcessRedirectInfoWithError:(id*)arg1;
- (void)_setAccountCookies:(id)arg1;
- (bool)_validateAllowlist:(id)arg1 error:(id*)arg2;
- (id)account;
- (id)additionalQueryItems;
- (id)bag;
- (id)campaignAttributor;
- (id)clientInfo;
- (id)initWithURL:(id)arg1 bag:(id)arg2;
- (id)initWithURL:(id)arg1 bag:(id)arg2 URLSession:(id)arg3;
- (id)perform;
- (void)setAccount:(id)arg1;
- (void)setAdditionalQueryItems:(id)arg1;
- (void)setCampaignAttributor:(id)arg1;
- (void)setClientInfo:(id)arg1;

@end
