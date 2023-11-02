
@interface AMSMarketingItemTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSString * _clientIdentifier;
    AMSProcessInfo * _clientInfo;
    NSString * _clientVersion;
    NSDictionary * _contextInfo;
    bool  _hydrateRelatedContent;
    bool  _includeMediaAssets;
    NSString * _logKey;
    NSString * _offerHints;
    NSString * _placement;
    NSString * _serviceType;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, copy) NSDictionary *contextInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hydrateRelatedContent;
@property (nonatomic) bool includeMediaAssets;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *offerHints;
@property (nonatomic, readonly) NSString *placement;
@property (nonatomic, readonly) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_fetchItems;
- (id)_fetchItemsFromURL:(id)arg1;
- (id)_processMediaResultFromPromise:(id)arg1;
- (id)account;
- (id)bag;
- (id)clientIdentifier;
- (id)clientInfo;
- (id)clientVersion;
- (id)contextInfo;
- (bool)hydrateRelatedContent;
- (bool)includeMediaAssets;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 clientIdentifier:(id)arg3 clientVersion:(id)arg4 placement:(id)arg5 serviceType:(id)arg6;
- (id)initWithBag:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 placement:(id)arg4 serviceType:(id)arg5;
- (id)logKey;
- (id)offerHints;
- (id)perform;
- (id)performWithFetchOnly;
- (id)placement;
- (id)serviceType;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setContextInfo:(id)arg1;
- (void)setHydrateRelatedContent:(bool)arg1;
- (void)setIncludeMediaAssets:(bool)arg1;
- (void)setLogKey:(id)arg1;
- (void)setOfferHints:(id)arg1;

@end
