
@interface AMSCarrierLinkTask : AMSTask <AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    ACAccount * _account;
    NSDictionary * _additionalLinkingParameters;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    <AMSCarrierLinkTaskDelegate> * _delegate;
    AMSEngagement * _engagementHandler;
    NSString * _guid;
    AMSCarrierLinkParams * _linkParams;
    AMSMetrics * _metrics;
    NSDictionary * _metricsOverlay;
    NSString * _msisdn;
    AMSPromise * _pacTokenPromise;
    NSString * _productCode;
    AMSURLRequestEncoder * _requestEncoder;
    AMSURLSession * _urlSession;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalLinkingParameters;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSCarrierLinkTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSEngagement *engagementHandler;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSCarrierLinkParams *linkParams;
@property (nonatomic, readonly) AMSMetrics *metrics;
@property (nonatomic, copy) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) NSString *msisdn;
@property (nonatomic, readonly) AMSPromise *pacTokenPromise;
@property (nonatomic, readonly) NSString *productCode;
@property (nonatomic, readonly) AMSURLRequestEncoder *requestEncoder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSURLSession *urlSession;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)_delegateHandleEngagementRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_linkFailureFromResult:(id)arg1;
- (id)_linkParameters;
- (id)_linkURLRequest;
- (id)_metricsEventFromCarrierLinkResult:(id)arg1 error:(id)arg2;
- (id)_pacToken;
- (void)_performDelegateAuthenticationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_performLinking;
- (id)_performLinkingWithValidations;
- (id)_promptForAccount;
- (id)_recordEngagementMetricsEvent:(id)arg1;
- (id)_resultDecodingURLResult:(id)arg1;
- (id)account;
- (id)additionalLinkingParameters;
- (id)bag;
- (id)clientInfo;
- (id)delegate;
- (id)engagementHandler;
- (id)guid;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 engagementHandler:(id)arg3 guid:(id)arg4 linkParams:(id)arg5 metrics:(id)arg6 msisdn:(id)arg7 pacTokenPromise:(id)arg8 productCode:(id)arg9 requestEncoder:(id)arg10 urlSession:(id)arg11;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 linkParams:(id)arg3 productCode:(id)arg4;
- (id)linkParams;
- (id)metrics;
- (id)metricsOverlay;
- (id)msisdn;
- (id)pacTokenPromise;
- (id)perform;
- (id)productCode;
- (id)requestEncoder;
- (void)setAccount:(id)arg1;
- (void)setAdditionalLinkingParameters:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (id)urlSession;

@end
