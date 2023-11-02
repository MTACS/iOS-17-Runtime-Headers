
@interface AMSBagNetworkTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionTaskDelegate> {
    AMSLazyPromise * _URLSessionPromise;
    <AMSBagAccountProvider> * _accountProvider;
    AMSProcessInfo * _clientInfo;
    NSString * _logKey;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) AMSLazyPromise *URLSessionPromise;
@property (nonatomic, readonly) <AMSBagAccountProvider> *accountProvider;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic, retain) NSString *profileVersion;
@property (readonly) Class superclass;

+ (id)_URLCookieNamesForProfile:(id)arg1;
+ (id)_bagDataByApplyingOverridesToBagData:(id)arg1;
+ (id)_cookiesForNames:(id)arg1 clientInfo:(id)arg2 account:(id)arg3;
+ (id)_defaultURLCookieNames;
+ (id)_queryItemsForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 cookieNames:(id)arg4 account:(id)arg5 storefront:(id)arg6;
+ (id)_queryItemsForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 cookieNames:(id)arg4 accountProvider:(id)arg5;
+ (id)_requestIdentifierForQueryItems:(id)arg1;
+ (id)_requestIdentifierForQueryItems:(id)arg1 prefix:(id)arg2;
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;
+ (bool)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;
+ (id)requestPartialIdentifierForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)URLSessionPromise;
- (id)_createRequestWithQueryItems:(id)arg1;
- (id)_performFetchWithAttemptedCount:(unsigned long long)arg1 account:(id)arg2 storefront:(id)arg3;
- (bool)_shouldRetryForResult:(id)arg1 cookieNames:(id)arg2 urlCookies:(id)arg3 responseStorefront:(id)arg4;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;
- (id)accountProvider;
- (id)clientInfo;
- (id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 accountProvider:(id)arg4;
- (id)logKey;
- (id)performFetch;
- (id)profile;
- (id)profileVersion;
- (void)setClientInfo:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;

@end
