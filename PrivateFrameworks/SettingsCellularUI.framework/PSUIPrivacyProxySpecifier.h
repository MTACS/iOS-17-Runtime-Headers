
@interface PSUIPrivacyProxySpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext * _context;
    PSUICoreTelephonyDataCache * _dataCache;
}

@property (nonatomic, retain) CTXPCServiceSubscriptionContext *context;
@property (nonatomic, retain) PSUICoreTelephonyDataCache *dataCache;

- (void).cxx_destruct;
- (id)context;
- (id)dataCache;
- (id)groupSpecifier;
- (id)initWithDataCache:(id)arg1 context:(id)arg2;
- (id)isPrivacyProxyEnabled;
- (void)setContext:(id)arg1;
- (void)setDataCache:(id)arg1;
- (void)setPrivacyProxyEnabled:(id)arg1;

@end
