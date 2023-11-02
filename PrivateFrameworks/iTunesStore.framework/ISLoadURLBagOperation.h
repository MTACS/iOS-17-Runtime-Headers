
@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    NSNumber * _accountDSID;
    SSURLBagContext * _context;
    ISURLBag * _outputBag;
}

@property (readonly) ISURLBag *URLBag;
@property (nonatomic, retain) NSNumber *accountDSID;
@property (readonly) SSURLBagContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;

+ (void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)_executedNetworkRequests;
+ (id)_networkCounters;
+ (id)_networkSynchronyQueue;
+ (void)decrementNetworkCounterForBagContext:(id)arg1;
+ (void)incrementNetworkCounterForBagContext:(id)arg1;
+ (id)storeFrontHeaderSuffix;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)URLBag;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_setOutputURLBag:(id)arg1;
- (bool)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)accountDSID;
- (id)context;
- (id)init;
- (id)initWithBagContext:(id)arg1;
- (bool)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
- (void)setAccountDSID:(id)arg1;
- (id)uniqueKey;

@end
